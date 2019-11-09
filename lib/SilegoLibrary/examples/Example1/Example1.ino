#include "Silego.h"             // Include Silego header file
#include "macros/SLG46531.h"    // Include macros for SLG46531

// Create an instance of Silego class called
// "silego" with device address 0x00
Silego silego(0x00);          

byte a = 0;

void setup() {
  Serial.begin(9600);
  Serial.print("GreenPAK: ");
  Serial.println(GreenPAK);
}

void loop() {
  // write the value of variable "a" to byte_address RAM_BYTE_0
  silego.writeI2C(RAM_BYTE_0, a);

  // read the data in RAM_BYTE_0 and store it in variable "myData"
  byte myData = silego.readI2C(RAM_BYTE_0);

  Serial.print("myData: ");      // print the value of "myData" to
  Serial.print(myData);          // the Arduino Serial Monitor
  Serial.println();
  a++;
  delay(100);
}
