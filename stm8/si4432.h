#ifndef SI4432_H__
#define SI4432_H__

#include "spi.h"


#define INT1_CRC_ERROR        0x01U // CRC error in received packet
#define INT1_PACKET_RECEIVED  0x02U // Packet received interrupt
#define INT1_PACKET_SENT      0x04U // Packet sent interrupt
#define INT2_POWER_ON_RESET   0x01U // Power On Reset
#define INT2_CHIP_READY       0x02U // Chip Ready
#define INT2_WAKEUP_TIMER     0x08U // Wake-up Timer
#define INT2_RSSI_LEVEL       0x10U // RSSI Level
#define INT2_INVALID_PREAMBLE 0x20U // Invalid Preamble
#define INT2_VALID_PREAMBLE   0x40U // Valid Preamble
#define INT2_SYNC_WORD        0x80U // Sync Word

enum EDataRate
{
  DataRate1kbps25kHz,
  DataRate2kbps25kHz,
  DataRate4kbps25kHz,
  DataRate8kbps25kHz,
  DataRate16kbps25kHz,
  DataRate32kbps32kHz,
  DataRate64kbps32kHz,
  DataRate128kbps64kHz,
  DataRate256kbps128kHz,
  DataRateNoOf
};

enum EMode
{
  ModeNull,
  ModeFifoOOK,
  ModeFifoFSK,
  ModeFifoGFSK,
  ModeCW,
  ModeP9OOK,
  ModeP9FSK,
  ModeP9GFSK,
  ModeNoOff
};

enum ETxPower
{
  TxPower1dBm,
  TxPower2dBm,
  TxPower5dBm,
  TxPower8dBm,
  TxPower11dBm,
  TxPower14dBm,
  TxPower17dBm,
  TxPower20dBm,
  TxPowerNoOf
};

struct TStatus
{
  uint8_t DevStatus;
  uint8_t IntStatus1;
  uint8_t IntStatus2;
  uint8_t IntEnable1;
  uint8_t IntEnable2;
  uint8_t Mode1;
  uint8_t Mode2;
};

#define Si4432GetVoltage() ( Si4432ReadRegister( 0x1b ) * 5 + 170 )
#define Si4432SetOscLoad( OscLoad ) Si4432WriteRegister( 0x09, OscLoad )
#define Si4432GetOscLoad() Si4432ReadRegister( 0x09 )
#define Si4432SetTxPower( TxPower ) Si4432WriteRegister( 0x6d, TxPower )
#define Si4432ClearTxFifo() Si4432ClearFifo( 0x01 )
#define Si4432ClearRxFifo() Si4432ClearFifo( 0x02 )

bool Si4432Init( void );
void Si4432Idle( void );
void Si4432Standby( void );
void Si4432Receive( void );
void Si4432SetMode( uint8_t const Mode );
void Si4432Interrupt( void );
void Si4432SetLink( struct TLink const* const Link );
void Si4432Transmit( struct TLink const* const Link, uint8_t const *const Buffer, uint8_t const Length );
void Si4432Transmit0( void );
void Si4432ResetLink( void );
void Si4432ClearFifo( uint8_t const Mask );
void Si4432SetUnitId( uint8_t const UnitId );
void Si4432SetChannel( uint8_t const Channel );
void Si4432Enable30MHz( void );
void Si4432SetDataRate( uint8_t const DataRate );
void Si4432WriteRegister( uint8_t const Register, uint8_t const Data );
void Si4432SetWakeUpTimer( uint32_t const Interval );
uint8_t Si4432ReadRssi( void );
uint8_t Si4432ReadRxPacket( uint8_t *Buffer, uint8_t const MaxLen );
int16_t Si4432GetFreqOffset( void );
int16_t Si4432GetTemperature( void );

#endif // SI4432_H__


