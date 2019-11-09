#include <Silego.h>
#include <util/crc16.h>
#include "nvm.h"

Silego chip(0x00);
byte ram[256];
char buf[128];

void writeRAM()
{
  for (int i = 0; i < 256; i++)
  {
    chip.writeI2C(i, nvm[i]);
  }
}

void resetCounters(){
  chip.writeI2C(0xF4, 0x03);
  chip.writeI2C(0xF4, 0x00);
}

uint16_t getCounter0(){
  return ((uint16_t)chip.readI2C(0xEC) << 8) | chip.readI2C(0xEB);
}

uint16_t getCounter1(){
  return ((uint16_t)chip.readI2C(0xEF) << 8) | chip.readI2C(0xEE);
}

void setup()
{
  Serial.begin(115200);
  Wire.begin();

  Serial.println();
  Serial.println("Writing RAM...");

  writeRAM();
  resetCounters();
}

void loop() {
  delay(50);
  snprintf(buf, 128, "\rCNT0:% -6u CNT1:% -6u", getCounter0(), getCounter1());
  Serial.print(buf);
}
