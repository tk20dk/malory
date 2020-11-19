#ifndef BH1750_H__
#define BH1750_H__

#include "i2c.h"


bool Bh1750Init( void );
void Bh1750Kick( void );
uint16_t Bh1750GetIlluminance( void );

#endif // TBH1750_H__

