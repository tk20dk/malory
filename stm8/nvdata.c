#include "iodef.h"


#define FLASH_DATA_START_PHYSICAL_ADDRESS 0x001000
#define NvDataFlash (*(TNvData*)FLASH_DATA_START_PHYSICAL_ADDRESS)

TNvData NvData;

static uint8_t NvDataChecksum( void )
{
  uint8_t Sum;
  uint8_t Index;
  uint8_t const *const Data = (uint8_t const*)&NvData;

  Sum = 0;
  for( Index = 0; Index < sizeof( TNvData ); Index++ )
  {
    Sum += Data[ Index ];
  }
  return Sum;
}

void NvDataInit( void )
{
  memcpy( &NvData, &NvDataFlash, sizeof( NvData ));

  if( NvDataChecksum() || ( NvData.Schema != NV_SCHEMA ))
  {
#ifdef DEBUG_NVDATA
    PrintStr( "NvData checksum error!" );
#endif

    memset( &NvData, 0, sizeof( TNvData ));

    NvData.Schema   = NV_SCHEMA;
    NvData.UnitId   = NV_UNITID;
    NvData.OscLoad  = NV_OSCLOAD;
    NvData.Interval = NV_INTERVAL;
    NvData.Link[0].TxPower  = NV_TXPOWER0;
    NvData.Link[0].Channel  = NV_CHANNEL0;
    NvData.Link[0].Gateway  = NV_GATEWAY0;
    NvData.Link[0].DataRate = NV_DATARATE0;
    NvData.Link[1].TxPower  = NV_TXPOWER1;
    NvData.Link[1].Channel  = NV_CHANNEL1;
    NvData.Link[1].Gateway  = NV_GATEWAY1;
    NvData.Link[1].DataRate = NV_DATARATE1;

    NvDataSave();
  }

#ifdef DEBUG_NVDATA
  PrintInt16( "UnitId: ", NvData.UnitId );
  PrintInt16( "OscLoad: ", NvData.OscLoad );
  PrintInt16( "Interval: ", NvData.Interval );
  PrintInt16( "TxPower0: ", NvData.Link[0].TxPower );
  PrintInt16( "Channel0: ", NvData.Link[0].Channel );
  PrintInt16( "Gateway0: ", NvData.Link[0].Gateway );
  PrintInt16( "DataRate0: ", NvData.Link[0].DataRate );
  PrintInt16( "TxPower1: ", NvData.Link[1].TxPower );
  PrintInt16( "Channel1: ", NvData.Link[1].Channel );
  PrintInt16( "Gateway1: ", NvData.Link[1].Gateway );
  PrintInt16( "DataRate1: ", NvData.Link[1].DataRate );
#endif
}

void NvDataSave( void )
{
  NvData.Checksum = 0;
  NvData.Checksum = -NvDataChecksum();

  FLASH_Unlock( FLASH_MemType_Data );
  memcpy( &NvDataFlash, &NvData, sizeof( NvData ));
  FLASH_Lock( FLASH_MemType_Data );

#ifdef DEBUG_NVDATA
  PrintStr( "NvData saved to flash" );
#endif
}


