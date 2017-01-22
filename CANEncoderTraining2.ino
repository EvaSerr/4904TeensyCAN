#include "CANEncoder2.h"
#include <TeensyCANBase.h>
#include <FlexCAN.h>
#include <Encoder.h>
#include <Send.h>

int pin1 = 5;
int pin2 = 6;

byte *receivedMsg;

int id = 0x600;

CANEncoder2* encoder = new CANEncoder2(pin1, pin2, 0x600);


void setup() {
  CAN_begin();
  CAN_add(encoder);
  Serial.begin(115200);
  while (!Serial);
  Serial.println("working");
}

void loop() {
  //sendMsg(encoder->getPos(), 0x601, can);
  CAN_update();
  //  receivedMsg *recieveMsg(0x600, CANbus);
}
