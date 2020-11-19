#ifndef APP_H__
#define APP_H__

#include "iodef.h"
#include "message.h"
#include "adc.h"
#include "si7021.h"
#include "bh1750.h"
#include "si4432.h"


enum EState
{
  StateNull,
  StateTxStart,
  StateTxKickWait,
  StateTxKickDone,
  StateTxWait,
  StateTxDone,
  StateTxAckWait,
  StateTxAckDone,
  StateTxAckTimeout,
};

extern void AppInit( void );
extern void AppLoop( void );
extern void AppInterruptRTC( void );
extern void AppInterruptReceive( void );
extern void AppInterruptTransmit( void );
extern void AppInterruptSysTick( void );

#endif // APP_H__

