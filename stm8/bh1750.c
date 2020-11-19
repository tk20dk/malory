#include "bh1750.h"


#define I2C_ADDR  0x46
#define Reset     0x07
#define PowerOn   0x01
#define PowerDown 0x00
#define StartMeas 0x21


bool Bh1750Init( void )
{
  uint8_t Buffer[ 1 ];
  Buffer[ 0 ] = PowerDown;
  return I2cWrite( I2C_ADDR, Buffer, sizeof( Buffer ));
}

// High resolution measurement time 180ms
void Bh1750Kick( void )
{
  uint8_t Buffer[ 1 ];
  Buffer[ 0 ] = StartMeas;
  I2cWrite( I2C_ADDR, Buffer, sizeof( Buffer ));
}

uint16_t Bh1750GetIlluminance( void )
{
  bool res;
  uint8_t Buffer[ 2 ];
  uint32_t Illuminance;

  res = I2cRead( I2C_ADDR, Buffer, sizeof( Buffer ));
  if( res )
  {
    Illuminance = ( Buffer[ 0 ] << 8U ) + Buffer[ 1 ];
    Illuminance *= 50U;
    Illuminance /= 12U;
  }
  else
  {
    Illuminance = 0;
  }

  return Illuminance;
}


