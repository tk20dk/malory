#ifndef SPI_H__
#define SPI_H__

#include "iodef.h"


void SpiInit( void );
uint8_t SpiWriteRead( uint8_t const Data );
void SpiReadBuffer( uint8_t *const Data, uint8_t const Length );
void SpiWriteBuffer( uint8_t const *const Data, uint8_t const Length );
void SpiWriteReadBufffer( uint8_t *const Data, uint8_t const Length );

#endif // SPI_H__

