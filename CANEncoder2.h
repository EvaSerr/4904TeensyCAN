#ifndef __CANENCODER2_H__
#define __CANENCODER2_H__

#include <AbstractTeensyCAN.h>
#include <Encoder.h>

class CANEncoder2 : public AbstractTeensyCAN, public Encoder {
  public:
    int call(byte* msg, byte* resp);
    CANEncoder2(int pin1, int pin2, uint32_t id);
    long getPos();
  private:
    long lastPos;
    long lastRead;
};

#endif
