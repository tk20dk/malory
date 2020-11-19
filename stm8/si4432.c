#include "iodef.h"


#if 0
433.050 MHz 	434.790 MHz 	1.74 MHz 	433.920 MHz

1 	433.075 	24 	433.650 	47 	434.225
2 	433.100 	25 	433.675 	48 	434.250
3 	433.125 	26 	433.700 	49 	434.275
4 	433.150 	27 	433.725 	50 	434.300
5 	433.175 	28 	433.750 	51 	434.325
6 	433.200 	29 	433.775 	52 	434.350
7 	433.225 	30 	433.800 	53 	434.375
8 	433.250 	31 	433.825 	54 	434.400
9 	433.275 	32 	433.850 	55 	434.425
10 	433.300 	33 	433.875 	56 	434.450
11 	433.325 	34 	433.900 	57 	434.475
12 	433.350 	35 	433.925 	58 	434.500
13 	433.375 	36 	433.950 	59 	434.525
14 	433.400 	37 	433.975 	60 	434.550
15 	433.425 	38 	434.000 	61 	434.575
16 	433.450 	39 	434.025 	62 	434.600
17 	433.475 	40 	434.050 	63 	434.625
18 	433.500 	41 	434.075 	64 	434.650
19 	433.525 	42 	434.100 	65 	434.675
20 	433.550 	43 	434.125 	66 	434.700
21 	433.575 	44 	434.150 	67 	434.725
22 	433.600 	45 	434.175 	68 	434.750
23 	433.625 	46 	434.200 	69 	434.775
#endif


#define PWRSTATE_SLEEP   0x60U // define sleep mode
#define PWRSTATE_TX      0x48U // define Tx mode
#define PWRSTATE_RX      0x44U // define Rx mode
#define PWRSTATE_READY   0x41U // define ready mode
#define PWRSTATE_STANDBY 0x00U // define standby mode

#define TX_HDR     0x3a
#define RX_HDR     0x47
#define TX_PKT_LEN 0x3e
#define RX_PKT_LEN 0x4b
#define FIFO       0x7f

#define SYNC_LENGTH   4
#define HEADER_LENGTH 4

#define TX0_RX0() WriteRegister( 0x0e, 0x00 ) // Antenna state for ready, standby and power down
#define TX1_RX0() WriteRegister( 0x0e, 0x01 ) // Antenna state for Tx
#define TX0_RX1() WriteRegister( 0x0e, 0x02 ) // Antenna state for Rx
#define ReadStatus( Status ) ReadRegisters( 0x02, (uint8_t*)Status, 7 )

static uint8_t ReadRegister( uint8_t const Register );
static void ReadRegisters( uint8_t const Register, uint8_t *const Buffer, uint8_t const Length );
static void WriteRegister( uint8_t const Register, uint8_t const Data );
static void WriteRegisters( uint8_t const Register, uint8_t const *const Buffer, uint8_t const Length );
static void SetClearRegister( uint8_t const Register, uint8_t const Set, uint8_t const Clear );
static void EnableInterrupt( uint8_t const Mask1, uint8_t const Mask2 );
static void DisableInterrupt( uint8_t const Mask1, uint8_t const Mask2 );

static struct TLink const* ActiveLink;
static uint8_t const SyncWord[ SYNC_LENGTH ] = { 0x2d, 0xd4, 0x2d, 0xd4 };


// ============================================================================
// Public functions
// ============================================================================
bool Si4432Init( void )
{
  uint8_t DeviceType;
  uint8_t DeviceVersion;

  EXTI_SetPinSensitivity( SI4432_PIN_EXTI, EXTI_Trigger_Falling );
  GPIO_Init( SI4432_PORT_IRQ, SI4432_PIN_IRQ, GPIO_Mode_In_PU_IT );
  GPIO_Init( SI4432_PORT_SDN, SI4432_PIN_SDN, GPIO_Mode_Out_PP_High_Slow );
  GPIO_Init( SI4432_PORT_SEL, SI4432_PIN_SEL, GPIO_Mode_Out_PP_High_Slow );

  HAL_MsDelay( 1 );
  SI4432_SDN_L();
  HAL_MsDelay( 100 );

  DeviceType    = ReadRegister( 0x00 );
  DeviceVersion = ReadRegister( 0x01 );
  if(( DeviceType != 0x08 ) || ( DeviceVersion != 0x06 ))
  {
    return false;
  }

  WriteRegister( 0x0b, 0xca ); // GPIO 0 = digital output
  WriteRegister( 0x0c, 0xca ); // GPIO 1 = digital output
  WriteRegister( 0x0d, 0xca ); // GPIO 2 = digital output

  WriteRegister( 0x30, 0x8c ); // enable PH+ FIFO, enable crc, msb
  WriteRegister( 0x32, 0xff ); // head = byte 3, 2, 1, 0
  WriteRegister( 0x33, 0x42 ); // sync = byte 3, 2
  WriteRegister( 0x34, 40 );   // preamble for Tx = 40 nibble
  WriteRegister( 0x35, 0x20 ); // preamble detection = 20bit
  WriteRegisters( 0x36, SyncWord, sizeof( SyncWord ));

  Si4432SetUnitId( NvData.UnitId );
  Si4432SetOscLoad( NvData.OscLoad );

  EnableInterrupt(
    INT1_PACKET_SENT | INT1_CRC_ERROR | INT1_PACKET_RECEIVED,
    INT2_WAKEUP_TIMER | INT2_SYNC_WORD );

#ifdef DEBUG_OSCTUNE
  Si4432Enable30MHz();
  HAL_MsDelay( 100000 );
#endif

  return true;
}

extern void AppInterruptReceive( void );
extern void AppInterruptTransmit( void );
extern void AppInterruptSyncWord( void );
void Si4432Interrupt( void )
{
  struct TStatus Status;

  ReadStatus( &Status );

  if( Status.IntStatus1 & INT1_PACKET_SENT )
  {
    WriteRegister( 0x07, PWRSTATE_READY );
    AppInterruptTransmit();
  }

  if( Status.IntStatus1 & INT1_PACKET_RECEIVED )
  {
    AppInterruptReceive();
  }

  if( Status.IntStatus2 & INT2_WAKEUP_TIMER )
  {
  }

  if( Status.IntStatus2 & INT2_SYNC_WORD )
  {
    AppInterruptSyncWord();
  }
}

void Si4432SetLink( struct TLink const* const Link )
{
  if( Link != ActiveLink )
  {
    ActiveLink = Link;
    Si4432SetTxPower( Link->TxPower );
    Si4432SetChannel( Link->Channel );
    Si4432SetDataRate( Link->DataRate );
  }
}

void Si4432ResetLink( void )
{
  ActiveLink = NULL;
}

#if 0
int16_t Si4432GetTemperature( void )
{
  int16_t Temp;

  // 1. Set the input for ADC to the temperature sensor, "Register 0Fh. ADC Configuration"—adcsel[2:0] = 000
  // 2. Set the reference for ADC, "Register 0Fh. ADC Configuration"—adcref[1:0] = 00
  // 3. Set the temperature range for ADC, "Register 12h. Temperature Sensor Calibration"—tsrange[1:0]
  // 4. Set entsoffs = 1, "Register 12h. Temperature Sensor Calibration"
  // 5. Trigger ADC reading, "Register 0Fh. ADC Configuration"—adcstart = 1
  // 6. Read temperature value—Read contents of "Register 11h. ADC Value"

  WriteRegister( 0x0f, 0x80U );
  HAL_MsDelay( 5 );
  Temp = ReadRegister( 0x11 );
  return (( Temp * 10 ) / 2 ) - 640;
}
#endif

void Si4432SetMode( uint8_t const Mode )
{
  static uint8_t const ModeData[ ModeNoOff ] =
  {
    0x20, 0x21, 0x22, 0x23, 0x30, 0x31, 0x32, 0x33
  };

  WriteRegister( 0x71, ModeData[ Mode ] );

  if( Mode >= ModeCW )
  {
    Si4432Transmit0();
  }
}

void Si4432Enable30MHz( void )
{
  WriteRegister( 0x0a, 0x00 );
  WriteRegister( 0x0d, 0xc0 ); // GPIO 2 = 30mHz output
}

void Si4432SetUnitId( uint8_t const UnitId )
{
  uint8_t const RxHeader[ HEADER_LENGTH ] = { UnitId };
  static uint8_t const RxMask[ HEADER_LENGTH ] = { 0xff, 0x00, 0x00, 0x00 };

  WriteRegisters( 0x43, RxMask,   sizeof( RxMask   ));
  WriteRegisters( 0x3f, RxHeader, sizeof( RxHeader ));
}

uint8_t Si4432ReadRssi( void )
{
  uint8_t Rssi;
  do
  {
    Rssi = ReadRegister( 0x26 );
  }
  while( Rssi == 0U );

  return Rssi;
}

#if 0
void Si4432SetWakeUpTimer( uint32_t const Interval )
{
  // Disable wake-up timer
//  SetClearRegister( 0x07, 0x00U, 0x20U );

  if( Interval > 0U )
  {
    uint32_t const R = 4U;
    uint32_t const M = ( Interval * 10U ) / 16U;

    WriteRegister( 0x14, R );
    WriteRegister( 0x15, M >> 8 );
    WriteRegister( 0x16, M );

    // Enable wake-up timer
//    SetClearRegister( 0x07, 0x20U, 0x00U );
  }
}
#endif

int16_t Si4432GetFreqOffset()
{
  int32_t Correction = (int8_t)ReadRegister( 0x2b );
  Correction *= 4;
  Correction |= ReadRegister( 0x2c ) >> 6;
  return ( Correction * 15625 ) / 100;
}

void Si4432SetDataRate( enum EDataRate const DataRate )
{
  uint8_t Index;
  static uint8_t const RateDataRegs[ 18 ] =
  {
    0x6E, 0x6F, 0x70, 0x58, 0x72, 0x71, 0x1C, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x1D, 0x1E, 0x2A, 0x1F, 0x69
  };
  static uint8_t const RateData[ DataRateNoOf ][ 18 ] =
  {
    { 0x08, 0x31, 0x2C, 0x80, 0x28, 0x23, 0x2E, 0xE8, 0x60, 0x20, 0xC5, 0x00, 0x05, 0x44, 0x0A, 0x1E, 0x03, 0x60 }, // DataRate1kbpx25kHz
    { 0x10, 0x62, 0x2C, 0x80, 0x28, 0x23, 0x15, 0xE8, 0x60, 0x20, 0xC5, 0x00, 0x07, 0x44, 0x0A, 0x1E, 0x03, 0x60 }, // DataRate2kbps25kHz
    { 0x20, 0xC5, 0x2C, 0x80, 0x28, 0x23, 0x15, 0xF4, 0x20, 0x41, 0x89, 0x00, 0x17, 0x44, 0x0A, 0x1E, 0x03, 0x60 }, // DataRate4kbps25kHz
    { 0x41, 0x89, 0x2C, 0x80, 0x28, 0x23, 0x16, 0xFA, 0x00, 0x83, 0x12, 0x00, 0x56, 0x44, 0x0A, 0x1E, 0x03, 0x60 }, // DataRate8kbps25kHz
    { 0x83, 0x12, 0x2C, 0x80, 0x28, 0x23, 0x17, 0x7D, 0x01, 0x06, 0x25, 0x01, 0x52, 0x44, 0x0A, 0x1E, 0x03, 0x60 }, // DataRate16kbps25kHz
    { 0x08, 0x31, 0x0C, 0x80, 0x33, 0x23, 0x05, 0x7D, 0x01, 0x06, 0x25, 0x02, 0x0E, 0x44, 0x0A, 0x20, 0x03, 0x60 }, // DataRate32kbps32kHz
    { 0x10, 0x62, 0x0C, 0x80, 0x33, 0x23, 0x07, 0x3F, 0x02, 0x0C, 0x4A, 0x07, 0xFF, 0x44, 0x0A, 0x31, 0x03, 0x60 }, // DataRate64kbps32kHz
    { 0x20, 0xC5, 0x0C, 0xC0, 0x66, 0x23, 0x83, 0x5E, 0x01, 0x5D, 0x86, 0x05, 0x74, 0x44, 0x0A, 0x50, 0x03, 0x60 }, // DataRate128kbps64kHz
    { 0x41, 0x89, 0x0C, 0xED, 0xCD, 0x23, 0x8C, 0x2F, 0x02, 0xBB, 0x0D, 0x07, 0xFF, 0x44, 0x02, 0x50, 0x03, 0x60 }  // DataRate256kbps128kHz
  };

  for( Index = 0; Index < sizeof( RateDataRegs ); Index++ )
  {
    WriteRegister( RateDataRegs[ Index ], RateData[ DataRate ][ Index ] );
  }
}

void Si4432SetChannel( uint8_t const Channel )
{
  static uint8_t const FreqData[ 69 ][ 3 ] =
  {
    { 0x53, 0x4C, 0xE0 }, { 0x53, 0x4D, 0x80 }, { 0x53, 0x4E, 0x20 }, { 0x53, 0x4E, 0xC0 },
    { 0x53, 0x4F, 0x60 }, { 0x53, 0x50, 0x00 }, { 0x53, 0x50, 0xA0 }, { 0x53, 0x51, 0x40 },
    { 0x53, 0x51, 0xE0 }, { 0x53, 0x52, 0x80 }, { 0x53, 0x53, 0x20 }, { 0x53, 0x53, 0xC0 },
    { 0x53, 0x54, 0x60 }, { 0x53, 0x55, 0x00 }, { 0x53, 0x55, 0xA0 }, { 0x53, 0x56, 0x40 },
    { 0x53, 0x56, 0xE0 }, { 0x53, 0x57, 0x80 }, { 0x53, 0x58, 0x20 }, { 0x53, 0x58, 0xC0 },
    { 0x53, 0x59, 0x60 }, { 0x53, 0x5A, 0x00 }, { 0x53, 0x5A, 0xA0 }, { 0x53, 0x5B, 0x40 },
    { 0x53, 0x5B, 0xE0 }, { 0x53, 0x5C, 0x80 }, { 0x53, 0x5D, 0x20 }, { 0x53, 0x5D, 0xC0 },
    { 0x53, 0x5E, 0x60 }, { 0x53, 0x5F, 0x00 }, { 0x53, 0x5F, 0xA0 }, { 0x53, 0x60, 0x40 },
    { 0x53, 0x60, 0xE0 }, { 0x53, 0x61, 0x80 }, { 0x53, 0x62, 0x20 }, { 0x53, 0x62, 0xC0 },
    { 0x53, 0x63, 0x60 }, { 0x53, 0x64, 0x00 }, { 0x53, 0x64, 0xA0 }, { 0x53, 0x65, 0x40 },
    { 0x53, 0x65, 0xE0 }, { 0x53, 0x66, 0x80 }, { 0x53, 0x67, 0x20 }, { 0x53, 0x67, 0xC0 },
    { 0x53, 0x68, 0x60 }, { 0x53, 0x69, 0x00 }, { 0x53, 0x69, 0xA0 }, { 0x53, 0x6A, 0x40 },
    { 0x53, 0x6A, 0xE0 }, { 0x53, 0x6B, 0x80 }, { 0x53, 0x6C, 0x20 }, { 0x53, 0x6C, 0xC0 },
    { 0x53, 0x6D, 0x60 }, { 0x53, 0x6E, 0x00 }, { 0x53, 0x6E, 0xA0 }, { 0x53, 0x6F, 0x40 },
    { 0x53, 0x6F, 0xE0 }, { 0x53, 0x70, 0x80 }, { 0x53, 0x71, 0x20 }, { 0x53, 0x71, 0xC0 },
    { 0x53, 0x72, 0x60 }, { 0x53, 0x73, 0x00 }, { 0x53, 0x73, 0xA0 }, { 0x53, 0x74, 0x40 },
    { 0x53, 0x74, 0xE0 }, { 0x53, 0x75, 0x80 }, { 0x53, 0x76, 0x20 }, { 0x53, 0x76, 0xC0 },
    { 0x53, 0x77, 0x60 }
  };

  WriteRegisters( 0x75, FreqData[ Channel - 1 ], 3 );
}

#if 0
void Si4432Idle( void )
{
  TX0_RX0();
  WriteRegister( 0x07, PWRSTATE_READY );
}
#endif

void Si4432Standby( void )
{
  TX0_RX0();
  WriteRegister( 0x07, PWRSTATE_STANDBY );
}

void Si4432Receive( void )
{
  TX0_RX1();
  WriteRegister( 0x07, PWRSTATE_RX );
}

void Si4432Transmit0( void )
{
  TX1_RX0();
  WriteRegister( 0x07, PWRSTATE_TX );
}

void Si4432Transmit( struct TLink const* const Link, uint8_t const *const Buffer, uint8_t const Length )
{
  WriteRegisters( TX_HDR, Buffer, HEADER_LENGTH );
  WriteRegister( TX_PKT_LEN, Length - HEADER_LENGTH );
  WriteRegisters( FIFO, &Buffer[ HEADER_LENGTH ], Length - HEADER_LENGTH );

  Si4432SetLink( Link );
  Si4432Transmit0();
}

uint8_t Si4432ReadRxPacket( uint8_t *const Buffer, uint8_t const MaxLen )
{
  uint8_t const Length = ReadRegister( RX_PKT_LEN );
  if( Length > ( MaxLen - HEADER_LENGTH ))
  {
    Si4432ClearRxFifo();
    return 0U;
  }

  ReadRegisters( RX_HDR, Buffer, HEADER_LENGTH );
  ReadRegisters( FIFO, &Buffer[ HEADER_LENGTH ], Length );

  return Length + HEADER_LENGTH;
}

void Si4432ClearFifo( uint8_t const Mask )
{
  SetClearRegister( 0x08, Mask, 0x00 );
  SetClearRegister( 0x08, 0x00, Mask );
}

uint8_t Si4432ReadRegister( uint8_t const Register )
{
  return ReadRegister( Register );
}

void Si4432WriteRegister( uint8_t const Register, uint8_t const Data )
{
  WriteRegister( Register, Data );
}

// ============================================================================
// Static functions
// ============================================================================
static uint8_t ReadRegister( uint8_t const Register )
{
  uint8_t Data;

  SI4432_SEL_L();

  SpiWriteRead( Register );
  Data = SpiWriteRead( 0 );

  SI4432_SEL_H();
  return Data;
}

void WriteRegister( uint8_t const Register, uint8_t const Data )
{
  SI4432_SEL_L();

  SpiWriteRead( 0x80 | Register );
  SpiWriteRead( Data );

  SI4432_SEL_H();
}

static void SetClearRegister( uint8_t const Register, uint8_t const Set, uint8_t const Clear )
{
  uint8_t Data = ReadRegister( Register );
  Data &= ~Clear;
  Data |= Set;
  WriteRegister( Register, Data );
}

static void ReadRegisters( uint8_t const Register, uint8_t *const Buffer, uint8_t const Length )
{
  SI4432_SEL_L();

  SpiWriteRead( Register );
  SpiReadBuffer( Buffer, Length );

  SI4432_SEL_H();
}

static void WriteRegisters( uint8_t const Register, uint8_t const *const Buffer, uint8_t const Length )
{
  SI4432_SEL_L();

  SpiWriteRead( 0x80 | Register );
  SpiWriteBuffer( Buffer, Length );

  SI4432_SEL_H();
}

static void EnableInterrupt( uint8_t const Mask1, uint8_t const Mask2 )
{
  SetClearRegister( 0x05, Mask1, 0x00 );
  SetClearRegister( 0x06, Mask2, 0x00 );
}

#if 0
static void DisableInterrupt( uint8_t const Mask1, uint8_t const Mask2 )
{
  SetClearRegister( 0x05, 0x00, Mask1 );
  SetClearRegister( 0x06, 0x00, Mask2 );
}
#endif

