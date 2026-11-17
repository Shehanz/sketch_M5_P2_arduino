#include <SoftwareSerial.h>

int pinRxBuatan = 10;
int pinTxBuatan = 11;

SoftwareSerial wemosSerial(pinRxBuatan, pinTxBuatan);

void setup() {

  Serial.begin(9600);
  wemosSerial.begin(19200);

}

void loop() {

  while (wemosSerial.available() > 0) {

    char buffer = wemosSerial.read();

    Serial.write(buffer);
  }
} 