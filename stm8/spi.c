#include "spi.h"


void SpiInit( void )
{
  GPIO_Init( SPI_PORT_SCK,  SPI_PIN_SCK,  GPIO_Mode_Out_PP_High_Fast );
  GPIO_Init( SPI_PORT_MISO, SPI_PIN_MISO, GPIO_Mode_In_PU_No_IT );
  GPIO_Init( SPI_PORT_MOSI, SPI_PIN_MOSI, GPIO_Mode_Out_PP_High_Fast );

  CLK_PeripheralClockConfig( CLK_Peripheral_SPI1, ENABLE );

  SPI_Init( SPI1, SPI_FirstBit_MSB, SPI_BaudRatePrescaler_2, SPI_Mode_Master,
            SPI_CPOL_Low, SPI_CPHA_1Edge, SPI_Direction_2Lines_FullDuplex,
            SPI_NSS_Soft, 0x00 );

  SPI_Cmd( SPI1, ENABLE );
}

uint8_t SpiWriteRead( uint8_t const Data )
{
  while(( SPI1->SR & SPI_FLAG_TXE ) == 0 )
  {
  }
  SPI1->DR = Data;
  while(( SPI1->SR & SPI_FLAG_RXNE ) == 0 )
  {
  }
  return SPI1->DR;
}

void SpiReadBuffer( uint8_t *const Data, uint8_t const Length )
{
  uint8_t Count;
  for( Count = 0; Count < Length; Count++ )
  {
    Data[ Count ] = SpiWriteRead( 0 );
  }
}

void SpiWriteBuffer( uint8_t const *const Data, uint8_t const Length )
{
  uint8_t Count;
  for( Count = 0; Count < Length; Count++ )
  {
    (void)SpiWriteRead( Data[ Count ] );
  }
}

void SpiWriteReadBuffer( uint8_t *const Data, uint8_t const Length )
{
  uint8_t Count;
  for( Count = 0; Count < Length; Count++ )
  {
    Data[ Count ] = SpiWriteRead( Data[ Count ] );
  }
}

