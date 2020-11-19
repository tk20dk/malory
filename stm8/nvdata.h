#ifndef NVDATA_H__
#define NVDATA_H__


typedef struct
{
  uint8_t Checksum;
  uint8_t Schema;
  uint8_t UnitId;
  uint8_t OscLoad;
  uint8_t Interval;
  struct TLink Link[ 2 ];
} TNvData;

extern TNvData NvData;

void NvDataInit( void );
void NvDataSave( void );

#endif // NVDATA_H__

