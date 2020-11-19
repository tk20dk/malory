#ifndef __SI7021_H__
#define __SI7021_H__

#include "i2c.h"


bool Si7021Init( void );
void Si7021Kick( void );
uint16_t Si7021GetHumidity( void );
int16_t Si7021GetTemperature( void );

#endif // __SI7021_H__


