#ifndef IODEF_H__
#define IODEF_H__

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stm8l15x.h>
#include "message.h"
#include "nvdata.h"
#include "si4432.h"

#define DEBUG_SERIAL_no
#define DEBUG_NVDATA_no
#define DEBUG_SENSORDATA_no
#define DEBUG_OSCTUNE_no

#define NV_SCHEMA 1
#define NV_UNITID xx
#define NV_INTERVAL 60

#if NV_UNITID == 8
  #define NV_OSCLOAD 103
#elif NV_UNITID == 9
  #define NV_OSCLOAD 103
#elif NV_UNITID == 10
  #define NV_OSCLOAD 103
#elif NV_UNITID == 11
  #define NV_OSCLOAD 110
#elif NV_UNITID == 12
  #define NV_OSCLOAD 104
#elif NV_UNITID == 13
  #define NV_OSCLOAD 109
#elif NV_UNITID == 14
  #define NV_OSCLOAD 109
#elif NV_UNITID == 15
  #define NV_OSCLOAD 108
#elif NV_UNITID == 16
  #define NV_OSCLOAD 105
#elif NV_UNITID == 17
  #define NV_OSCLOAD 110
#elif NV_UNITID == 18
  #define NV_OSCLOAD 109
#elif NV_UNITID == 19
  #define NV_OSCLOAD 115
#elif NV_UNITID == 20
  #define NV_OSCLOAD 105
#elif NV_UNITID == 50
  #define NV_OSCLOAD 107
#elif NV_UNITID == 51
  #define NV_OSCLOAD 106
#endif

#define NV_TXPOWER0 TxPower11dBm
#define NV_CHANNEL0 10
#define NV_GATEWAY0 1
#define NV_DATARATE0 DataRate256kbps128kHz
#define NV_TXPOWER1 TxPower14dBm
#define NV_CHANNEL1 50
#define NV_GATEWAY1 1
#define NV_DATARATE1 DataRate2kbps25kHz


#define true TRUE
#define false FALSE
#define nullptr NULL

#define I2C_PORT_SDA     GPIOC
#define I2C_PORT_SCL     GPIOC
#define I2C_PIN_SDA      GPIO_Pin_0
#define I2C_PIN_SCL      GPIO_Pin_1

#define SPI_PORT_SCK     GPIOB
#define SPI_PORT_MISO    GPIOB
#define SPI_PORT_MOSI    GPIOB
#define SPI_PIN_SCK      GPIO_Pin_5
#define SPI_PIN_MOSI     GPIO_Pin_6
#define SPI_PIN_MISO     GPIO_Pin_7

#define UART_PORT_RX     GPIOC
#define UART_PORT_TX     GPIOC
#define UART_PIN_RX      GPIO_Pin_6
#define UART_PIN_TX      GPIO_Pin_5

#define HMI_PORT_LED     GPIOA
#define HMI_PORT_ERROR   GPIOA
#define HMI_PORT_BUZZER  GPIOC
#define HMI_PIN_LED      GPIO_Pin_3
#define HMI_PIN_ERROR    GPIO_Pin_2
#define HMI_PIN_BUZZER   GPIO_Pin_4

#define SI4432_PORT_SEL   GPIOB
#define SI4432_PORT_IRQ   GPIOD
#define SI4432_PORT_SDN   GPIOB
#define SI4432_PORT_GPIO0 GPIOB
#define SI4432_PORT_GPIO1 GPIOB
#define SI4432_PORT_GPIO2 GPIOB
#define SI4432_PIN_SEL    GPIO_Pin_4
#define SI4432_PIN_IRQ    GPIO_Pin_0
#define SI4432_PIN_SDN    GPIO_Pin_0
#define SI4432_PIN_GPIO0  GPIO_Pin_3
#define SI4432_PIN_GPIO1  GPIO_Pin_2
#define SI4432_PIN_GPIO2  GPIO_Pin_1
#define SI4432_PIN_EXTI   EXTI_Pin_0

#define HMI_LED_ON() HMI_PORT_LED->ODR |= HMI_PIN_LED
#define HMI_LED_OFF() HMI_PORT_LED->ODR &= ~HMI_PIN_LED
#define HMI_ERROR_ON() HMI_PORT_ERROR->ODR |= HMI_PIN_ERROR
#define HMI_ERROR_OFF() HMI_PORT_ERROR->ODR &= ~HMI_PIN_ERROR
#define HMI_BUZZER_ON() HMI_PORT_BUZZER->ODR |= HMI_PIN_BUZZER
#define HMI_BUZZER_OFF() HMI_PORT_BUZZER->ODR &= ~HMI_PIN_BUZZER
#define HMI_BUZZER( Interval )  HMI_BUZZER_ON(); HAL_MsDelay( Interval ); HMI_BUZZER_OFF()

#define SI4432_SEL_H() SI4432_PORT_SEL->ODR |= SI4432_PIN_SEL
#define SI4432_SEL_L() SI4432_PORT_SEL->ODR &= ~SI4432_PIN_SEL
#define SI4432_SDN_H() SI4432_PORT_SDN->ODR |= SI4432_PIN_SDN
#define SI4432_SDN_L() SI4432_PORT_SDN->ODR &= ~SI4432_PIN_SDN

void HAL_MsDelay( uint16_t const Delay );

#ifdef DEBUG_SERIAL
void PrintStr( char const *Text );
void PrintInt16( char const *Name, int16_t Value );
void PrintUInt16( char const *Name, uint16_t Value );
#else
  #define PrintStr( Text )
  #define PrintInt16( Name, Value )
  #define PrintUInt16( Name, Value )
#endif

#endif

