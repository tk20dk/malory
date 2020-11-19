#include "i2c.h"


#define I2C_SPEED 400000
#define I2C_TIMEOUT 100
#define I2C_SLAVE_ADDRESS7 0xa0

#define tout() I2cTout
#define dead_time() nop(); nop()


static uint16_t volatile I2cTout;

void I2cInit( void )
{
  CLK_PeripheralClockConfig( CLK_Peripheral_I2C1, ENABLE );

  GPIO_Init( I2C_PORT_SCL, I2C_PIN_SCL, GPIO_Mode_Out_OD_HiZ_Fast );
  GPIO_Init( I2C_PORT_SDA, I2C_PIN_SDA, GPIO_Mode_Out_OD_HiZ_Fast );

  I2C_Init( I2C1, I2C_SPEED, I2C_SLAVE_ADDRESS7, I2C_Mode_I2C, I2C_DutyCycle_2, I2C_Ack_Enable, I2C_AcknowledgedAddress_7bit );
  I2C_ITConfig( I2C1, I2C_IT_ERR, ENABLE );
  I2C_Cmd( I2C1, ENABLE);
}

bool I2cWriteRead( uint8_t const Addr, uint8_t const Register, uint8_t *const Buffer, uint8_t const Length )
{
  bool res = I2cWrite( Addr, &Register, 1 );
  if( res )
  {
    res = I2cRead( Addr, Buffer, Length );
  }

  return res;
}

bool I2cRead( uint8_t const Addr, uint8_t *Buffer, uint8_t Length )
{
  I2cTout = I2C_TIMEOUT;

  /*--------------- BUSY? -> STOP request ---------------------*/
  while(( I2C1->SR3 & I2C_SR3_BUSY ) && tout())            // Wait while the bus is busy
  {
    I2C1->CR2 |= I2C_CR2_STOP;                             // Generate stop here (STOP=1)
    while(( I2C1->CR2 & I2C_CR2_STOP ) && tout())          // Wait until stop is performed
    {
    }
  }
  I2C1->CR2 |= I2C_CR2_ACK;                                // ACK=1, Ack enable

  /*--------------- Start communication -----------------------*/  
  I2C1->CR2 |= I2C_CR2_START;                              // START=1, generate start
  while((( I2C1->SR1 & I2C_SR1_SB ) == 0 ) && tout())      // Wait for start bit detection (SB)
  {
  }

  /*------------------ Address send ---------------------------*/      
  if( tout() )
  {
    I2C1->DR = Addr | 1;                                   // Send 7-bit device address & Write (R/W = 1)
  }
  while(!( I2C1->SR1 & I2C_SR1_ADDR ) && tout())           // Wait for address ack (ADDR)
  {
  }

  /*------------------- Data Receive --------------------------*/
  if( Length > 2 )                                         // *** more than 2 bytes are received? ***
  {
    I2C1->SR3;                                             // ADDR clearing sequence    
    while(( Length > 3 ) &&  tout())                       // not last three bytes?
    {
      while(!( I2C1->SR1 & I2C_SR1_BTF ) && tout())        // Wait for BTF
      {
      }
      *Buffer++ = I2C1->DR;                                // Reading next data byte
      --Length;                                            // Decrease Numbyte to reade by 1
    }
                                                           // last three bytes should be read
    while(!( I2C1->SR1 & I2C_SR1_BTF )  &&  tout())        // Wait for BTF
    {
    }
    I2C1->CR2 &= ~I2C_CR2_ACK;                             // Clear ACK
    disableInterrupts();                                   // Errata workaround (Disable interrupt)
    *Buffer++ = I2C1->DR;                                  // Read 1st byte
    I2C1->CR2 |= I2C_CR2_STOP;                             // Generate stop here (STOP=1)
    *Buffer++ = I2C1->DR;                                  // Read 2nd byte
    enableInterrupts();                                    // Errata workaround (Enable interrupt)
    while(!( I2C1->SR1 & I2C_SR1_RXNE )  &&  tout())       // Wait for RXNE
    {
    }
    *Buffer++ = I2C1->DR;                                  // Read 3rd Data byte
  }
  else
  {
   if( Length == 2 )                                       // *** just two bytes are received? ***
    {
      I2C1->CR2 |= I2C_CR2_POS;                            // Set POS bit (NACK at next received byte)
      disableInterrupts();                                 // Errata workaround (Disable interrupt)
      I2C1->SR3;                                           // Clear ADDR Flag
      I2C1->CR2 &= ~I2C_CR2_ACK;                           // Clear ACK 
      enableInterrupts();                                  // Errata workaround (Enable interrupt)
      while(!( I2C1->SR1 & I2C_SR1_BTF )  &&  tout())      // Wait for BTF
      {
      }
      disableInterrupts();                                 // Errata workaround (Disable interrupt)
      I2C1->CR2 |= I2C_CR2_STOP;                           // Generate stop here (STOP=1)
      *Buffer++ = I2C1->DR;                                // Read 1st Data byte
      enableInterrupts();                                  // Errata workaround (Enable interrupt)
      *Buffer = I2C1->DR;                                  // Read 2nd Data byte
    }
    else                                                   // *** only one byte is received ***
    {
      I2C1->CR2 &= ~I2C_CR2_ACK;                           // Clear ACK 
      disableInterrupts();                                 // Errata workaround (Disable interrupt)
      I2C1->SR3;                                           // Clear ADDR Flag   
      I2C1->CR2 |= I2C_CR2_STOP;                           // generate stop here (STOP=1)
      enableInterrupts();                                  // Errata workaround (Enable interrupt)
      while(!( I2C1->SR1 & I2C_SR1_RXNE )  &&  tout())     // test EV7, wait for RxNE
      {
      }
      *Buffer = I2C1->DR;                                  // Read Data byte
    }
  }

  /*--------------- All Data Received -----------------------*/
  while(( I2C1->CR2 & I2C_CR2_STOP )  &&  tout())          // Wait until stop is performed (STOPF = 1)
  {
  }
  I2C1->CR2 &= ~I2C_CR2_POS;                               // return POS to default state (POS=0)

  return !!I2cTout;
}

bool I2cWrite( uint8_t const Addr, uint8_t const *const Buffer, uint8_t const Length )
{
  uint8_t Index;

  I2cTout = I2C_TIMEOUT;

  while(( I2C1->SR3 & 2 ) && tout())                       // Wait while the bus is busy
  {
    I2C1->CR2 |= 2;                                        // STOP=1, generate stop
    while(( I2C1->CR2 & 2 ) && tout())                     // wait until stop is performed
    {
    }
  }

  I2C1->CR2 |= 1;                                          // START=1, generate start
  while((( I2C1->SR1 & 1 ) == 0) && tout())                // Wait for start bit detection (SB)
  {
  }
  dead_time();                                             // SB clearing sequence

  if( tout() )
  {
    I2C1->DR = Addr;                                       // Send 7-bit device address & Write (R/W = 0)
  }
  while(!( I2C1->SR1 & 2 ) && tout())                      // Wait for address ack (ADDR)
  {
  }
  dead_time();                                             // ADDR clearing sequence
  I2C1->SR3;

  for( Index = 0; Index < Length; Index++ )
  {
    while(!( I2C1->SR1 & 0x80 ) && tout())                 // test EV8 - wait for TxE
    {
    }
    I2C1->DR = Buffer[ Index ];                            // send next data byte
  }

  while((( I2C1->SR1 & 0x84 ) != 0x84 ) && tout())         // Wait for TxE & BTF
  {
  }
  dead_time();                                             // clearing sequence

  I2C1->CR2 |= 2;                                          // generate stop here (STOP=1)
  while(( I2C1->CR2 & 2 ) && tout())                       // wait until stop is performed  
  {
  }

  return !!I2cTout;
}

void I2C1_SPI2_IRQHandler( void ) __interrupt( 29 )
{
  I2C1->SR2= 0;                                            // Clear Error Falg
  I2C1->CR2 |= 2;                                          // STOP=1, generate stop
  I2cTout = 0;                                             // Disable Timout 
}

void I2cInterruptSysTick( void )
{
  if( I2cTout )
  {
    I2cTout--;
  }
}

