#ifndef MESSAGE_H_
#define MESSAGE_H_


enum EMsgId
{
  MsgIdNull,
  MsgIdAck,
  MsgIdCmd,
  MsgIdHello,
  MsgIdConfig,
  MsgIdAckTune,
  MsgIdSensorTVHI,
  MsgIdSensorTVHP,
  MsgIdNoOf
};

struct TLink
{
  uint8_t TxPower;
  uint8_t Channel;
  uint8_t Gateway;
  uint8_t DataRate;
};

struct THeader
{
  uint8_t DestAddr;
  uint8_t SrcAddr;
  uint8_t MsgId;
  union
  {
    uint8_t Raw;
    uint8_t Rssi;
    struct
    {
      int8_t TxPower: 2;  // -1dBm, 0, +1dBm
      int8_t Offset: 3;   // -1s, -100ms -10ms, 0, +10ms, +100ms, +1s
      int8_t Interval: 3; // -1s, -100ms -10ms, 0, +10ms, +100ms, +1s
    };
  };
};

struct TAck
{
  struct THeader Header;
  uint8_t Fill;
};

struct TCmd
{
  struct THeader Header;
  uint8_t Flag;
  uint8_t Arg1;
  uint8_t Arg2;
  uint8_t Arg3;
};

struct TConfig
{
  struct THeader Header;
  uint8_t Flag;
  uint8_t UnitId;
  struct TLink Link[ 2 ];
};

struct TAckTune
{
  struct THeader Header;
  int16_t Offset;
  int16_t Interval;
};

struct TSensorTVHI
{
  struct THeader Header;
  int16_t  Temperature;
  uint16_t Voltage;
  uint16_t Humidity;
  uint16_t Illuminance;
  int16_t  FreqOffset;
  uint8_t AckTimeouts;
  uint8_t RetryTimeouts;
};

struct TSensorTVHP
{
  struct THeader Header;
  int16_t  Temperature;
  uint16_t Voltage;
  uint16_t Humidity;
  uint16_t Pressure;
};

union TData
{
  uint8_t Buffer[ 64 ];
  struct TAck Ack;
  struct TCmd Cmd;
  struct THeader Header;
  struct TConfig Config;
  struct TAckTune AckTune;
  struct TSensorTVHI SensorTVHI;
  struct TSensorTVHP SensorTVHP;
};

#endif // MESSAGE_H_

