#include "adc.h"
#include "nvdata.h"
#include "si7021.h"
#include "bh1750.h"
#include "si4432.h"
#include "application.h"


#define ACK_COUNT 2
#define ACK_TIMEOUT (50 + 10 * NvData.UnitId )
#define KICK_TIMEOUT ( 180 * 59375L / 100000L )

static void HandleAck( void );
static void LowPowerHalt( void );
static void SetLowPowerTimer( uint16_t const Interval );
static void SendSensorData( struct TLink const* const Link );
static int16_t SWAP16( uint16_t const Val );

static uint8_t Rssi;
static uint8_t AckCount;
static uint8_t KickVoltage;
static int16_t FreqOffset;
static int16_t Temperature;
static uint16_t AckTimer;
static uint16_t Voltage;
static uint16_t Interval;
static uint16_t Humidity;
static uint16_t Illuminance;
static uint16_t AckTimeouts;
static uint16_t RetryTimeouts;
static enum EMsgId MsgId = MsgIdHello; 
static enum EState State = StateTxStart;
static union TData Data;


void AppInit( void )
{
  bool Res;
  uint8_t WUCKSEL;

  PrintStr( "Malory sensor board" );

  WUCKSEL = RTC->CR1 & RTC_CR1_WUCKSEL;
  if( WUCKSEL != RTC_WakeUpClock_RTCCLK_Div4 )
  {
    HMI_ERROR_ON();
    PrintUInt16( "Error WakeUpClock ", WUCKSEL );
  }

  HMI_BUZZER( 10 );
  HAL_MsDelay( 100 );
  HMI_BUZZER( 10 );
  HAL_MsDelay( 100 );
  HMI_BUZZER( 10 );

  NvDataInit();
  Interval = (( NvData.Interval * 59375L ) / 100L ) - KICK_TIMEOUT;

  AdcInit();
  I2cInit();
  SpiInit();

  Res = Si4432Init();
  if( Res == false )
  {
    HMI_ERROR_ON();
    PrintStr( "SI4432 not detected" );
  }

#if 0
  Si4432SetTxPower( TxPower1dBm );
  Si4432SetChannel( 38 );
  Si4432SetMode(ModeCW);
  HAL_MsDelay( 100000 );
#endif

  Res = Si7021Init();
  if( Res == false )
  {
    HMI_ERROR_ON();
    PrintStr( "SI7021 not detected" );
  }

  Res = Bh1750Init();
  if( Res == false )
  {
    HMI_ERROR_ON();
    PrintStr( "BH1750 not detected" );
  }
}

void AppLoop( void )
{
  uint8_t Length;
  int16_t NewTemperature;
  uint16_t NewHumidity;
  uint16_t NewIlluminance;

  switch( State )
  {
    case StateNull:
      State = StateNull;
      break;

    case StateTxStart:
      Si7021Kick();
      Bh1750Kick();

      SetLowPowerTimer( KICK_TIMEOUT );
      State = StateTxKickWait;
      LowPowerHalt();
      break;

    case StateTxKickWait:
      break;

    case StateTxKickDone:
      SetLowPowerTimer( Interval );

      if( KickVoltage-- == 0 )
      {
        Voltage = AdcGetVoltage();
        KickVoltage = 10;
      }

      // si7021 - get humidity before temperature.
      NewHumidity = Si7021GetHumidity();
      NewTemperature = Si7021GetTemperature();
      NewIlluminance = Bh1750GetIlluminance();

static int a;
      if(a && ( Humidity == NewHumidity ) && ( Temperature == NewTemperature ) && ( Illuminance == NewIlluminance ))
      {
#ifdef DEBUG_SENSORDATA
        PrintStr( "No change" );
#endif
        State = StateNull;
        LowPowerHalt();
      }
      else
      {
        Humidity = NewHumidity;
        Temperature = NewTemperature;
        Illuminance = NewIlluminance;
#ifdef DEBUG_SENSORDATA
        PrintInt16( "V ", Voltage );
        PrintInt16( "T ", Temperature );
        PrintInt16( "H ", Humidity );
        PrintInt16( "I ", Illuminance );
        PrintInt16( "R ", Rssi );
        PrintInt16( "F ", FreqOffset );
#endif
        HMI_LED_ON();
        State = StateTxWait;
        AckCount = ACK_COUNT;
        SendSensorData( &NvData.Link[ 0 ] );
        wfi();
      }
      break;

    case StateTxWait:
      wfi();
      break;

    case StateTxDone:
      Rssi = 0;
      AckTimer = ACK_TIMEOUT;
      State = StateTxAckWait;
      Si4432Receive();
      wfi();
      break;

    case StateTxAckWait:
      wfi();
      break;

    case StateTxAckDone:
      AckCount = 0; // Stop ack timer
      Length = Si4432ReadRxPacket( Data.Buffer, sizeof( Data ));
      if( Length )
      {
        HandleAck();
      }

      HMI_LED_OFF();
      HMI_ERROR_OFF();
      Si4432Standby();
      State = StateNull;
      LowPowerHalt();
      break;

    case StateTxAckTimeout:
      if( AckCount )
      {
        AckCount--;
        RetryTimeouts++;
        HMI_LED_OFF();
        HMI_ERROR_ON();
        Rssi = 0;
        State = StateTxWait;
        SendSensorData( &NvData.Link[ 1 ] );
        wfi();
      }
      else
      {
        AckTimeouts++;
        HMI_ERROR_OFF();
        Si4432Standby();
        State = StateNull;
        LowPowerHalt();
      }
      break;

    default:
      State = StateNull;
      break;
  }
}

void AppInterruptRTC( void )
{
  if( State == StateNull )
  {
    State = StateTxStart;
  }
  else if( State == StateTxKickWait )
  {
    State = StateTxKickDone;
  }
  else
  {
//    HMI_ERROR_ON();
    PrintInt16( "Unexpected RTC interrupt ", State );
  }
}

void AppInterruptSysTick( void )
{
  if( AckTimer )
  {
    AckTimer--;
    if( AckTimer == 0 )
    {
      State = StateTxAckTimeout;
    }
  }
}

void AppInterruptTransmit( void )
{
  if( State == StateTxWait )
  {
    State = StateTxDone;
  }
  else
  {
//    HMI_ERROR_ON();
    PrintInt16( "Unexpected TX interrupt ", State );
  }
}

void AppInterruptReceive( void )
{
  if( State == StateTxAckWait )
  {
    State = StateTxAckDone;
  }
  else
  {
//    HMI_ERROR_ON();
    PrintInt16( "Unexpected RX interrupt ", State );
  }
}

void AppInterruptSyncWord( void )
{
  Rssi = Si4432ReadRssi();
  FreqOffset = Si4432GetFreqOffset();
}

static void SendSensorData( struct TLink const* const Link )
{
  struct TSensorTVHI Sensor;

  Sensor.Header.DestAddr = Link->Gateway;
  Sensor.Header.SrcAddr = NvData.UnitId;
  Sensor.Header.MsgId = MsgId;
  Sensor.Header.Rssi = Rssi;

  // Send Hello on first transmission
  MsgId = MsgIdSensorTVHI;

  Sensor.Voltage = SWAP16( Voltage );
  Sensor.Humidity = SWAP16( Humidity );
  Sensor.Illuminance = SWAP16( Illuminance );
  Sensor.Temperature = SWAP16( Temperature );
  Sensor.FreqOffset = SWAP16( FreqOffset );
  Sensor.AckTimeouts = AckTimeouts;
  Sensor.RetryTimeouts = RetryTimeouts;

  Si4432Transmit( Link, (uint8_t*)&Sensor, sizeof( Sensor ));
}

static void HandleAck( void )
{
  int16_t Offset;
  int16_t Duration;
  uint8_t const Index = Data.Config.Flag >> 7;
  struct TLink *const Link = &NvData.Link[ Index ];
  static int16_t const TuneData[ 8 ] = { 0, -594, -59, -6, 0, 6, 59, 594 };
  static int16_t const TuneTime[ 8 ] = { 0, -1000, -100, -10, 0, 10, 100, 1000 };

  switch( Data.Header.MsgId )
  {
    case MsgIdAck:
      if(( Data.Header.TxPower > 0 ) && ( Link->TxPower < TxPower20dBm ))
      {
        Link->TxPower++;
        Si4432SetTxPower( Link->TxPower );
        PrintInt16( "TxPower ", Link->TxPower );
      }
      if(( Data.Header.TxPower < 0 ) && ( Link->TxPower > TxPower1dBm ))
      {
        Link->TxPower--;
        Si4432SetTxPower( Link->TxPower );
        PrintInt16( "TxPower ", Link->TxPower );
      }
      if( Data.Header.Offset )
      {
        Offset = TuneData[ Data.Header.Offset + 4 ];
        SetLowPowerTimer( Interval + Offset );
        PrintInt16( "Offset(ms) ", TuneTime[ Data.Header.Offset + 4 ] );
      }
      if( Data.Header.Interval )
      {
        Duration = TuneData[ Data.Header.Interval + 4 ];
        Interval += Duration;
        SetLowPowerTimer( Interval );
        PrintInt16( "Interval(ms) ", TuneTime[ Data.Header.Interval + 4 ] );
      }
      break;

    case MsgIdAckTune:
      if( Data.AckTune.Interval )
      {
        int16_t const Tmp = SWAP16( Data.AckTune.Interval );
        Duration = ( Tmp * 59375L ) / 100000L;
        Interval += Duration;
        SetLowPowerTimer( Interval );
        PrintInt16( "Interval(ms) ", Tmp );
      }
      if( Data.AckTune.Offset )
      {
        int16_t const Tmp = SWAP16( Data.AckTune.Offset );
        Offset = ( Tmp * 59375L ) / 100000L;
        SetLowPowerTimer( Interval + Offset );
        PrintInt16( "Offset(ms) ", Tmp );
      }
      break;

    case MsgIdCmd:
      if( Data.Cmd.Flag & 0x01 )
      {
        NvDataSave();
      }
      if( Data.Cmd.Flag & 0x02 )
      {
        Si4432SetMode( Data.Cmd.Arg1 );
        HAL_MsDelay( 60000U );
      }
      if( Data.Cmd.Flag & 0x04 )
      {
        Si4432Enable30MHz();
        HAL_MsDelay( 10000U );
      }
      break;
    default:
      break;
  }
}

int16_t SWAP16( uint16_t const Value )
{
  return ( Value >> 8 ) | ( Value << 8 );
}

static void LowPowerHalt( void )
{
  PWR_UltraLowPowerCmd( ENABLE );
  halt();
}

static void SetLowPowerTimer( uint16_t const Interval )
{
  RTC_WakeUpCmd( DISABLE );
  HAL_MsDelay( 1 ); // ???
  RTC_SetWakeUpCounter( Interval );
  RTC_WakeUpCmd( ENABLE );
}

