#ifndef I2C_H__
#define I2C_H__

#include "iodef.h"


void I2cInit( void );
void I2cInterruptSysTick( void );

bool I2cRead( uint8_t const Addr, uint8_t *const Buffer, uint8_t const Length );
bool I2cWrite( uint8_t const Addr, uint8_t const *const Buffer, uint8_t const Length );
bool I2cWriteRead( uint8_t const Addr, uint8_t const Register, uint8_t *const Buffer, uint8_t const Length );

#endif // I2C_H__

