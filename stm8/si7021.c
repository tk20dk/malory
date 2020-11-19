#include "si7021.h"


#define I2C_ADDR 0x80U

bool Si7021Init( void )
{
  uint8_t Buffer[ 1 ];

  Buffer[ 0 ] = 0xee;
  return I2cWrite( I2C_ADDR, Buffer, sizeof( Buffer ));
}

void Si7021Kick( void )
{
  uint8_t Buffer[ 1 ];

  Buffer[ 0 ] = 0xe5;
  I2cWrite( I2C_ADDR, Buffer, sizeof( Buffer ));
}

uint16_t Si7021GetHumidity( void )
{
  uint8_t Buffer[ 2 ];
  uint32_t RH_Code;

  I2cRead( I2C_ADDR, Buffer, sizeof( Buffer ));
  RH_Code = (( Buffer[ 0 ] * 256U ) + Buffer[ 1 ] );

  return (( 1250U * RH_Code ) / 65536U ) - 60U;
}

int16_t Si7021GetTemperature( void )
{
  uint8_t Buffer[ 2 ];
  int32_t Temp_Code;

  I2cWriteRead( I2C_ADDR, 0xe0, Buffer, sizeof( Buffer ));
  Temp_Code = (( Buffer[ 0 ] * 256U ) + Buffer[ 1 ] );

  return (( 1757 * Temp_Code ) / 65536 ) - 469;
}


