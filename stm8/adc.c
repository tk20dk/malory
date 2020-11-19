#include "adc.h"


void AdcInit( void )
{
  CLK_PeripheralClockConfig( CLK_Peripheral_ADC1, ENABLE );

  ADC_Init( ADC1, ADC_ConversionMode_Single, ADC_Resolution_12Bit, ADC_Prescaler_2 );
  ADC_SamplingTimeConfig( ADC1, ADC_Group_SlowChannels, ADC_SamplingTime_384Cycles );
}

uint16_t AdcGetVoltage( void )
{
  uint16_t Vbat;

  ADC_Cmd( ADC1, ENABLE );
  ADC_VrefintCmd( ENABLE );
  HAL_MsDelay( 3 );
  ADC_ChannelCmd( ADC1, ADC_Channel_Vrefint, ENABLE );
  ADC_SoftwareStartConv( ADC1 );
  while( ADC_GetFlagStatus(ADC1, ADC_FLAG_EOC ) == 0 )
  {
  }
  Vbat = ADC_GetConversionValue( ADC1 );
  ADC_ChannelCmd( ADC1, ADC_Channel_Vrefint, DISABLE );
  ADC_VrefintCmd( DISABLE );
  ADC_Cmd( ADC1, DISABLE );

  return (( 4095UL * 1224UL ) / ( Vbat * 10 ));
}

