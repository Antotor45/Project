#include "Motors.h"
Motors motors;
/*
  Ea: A0
  Eb: A1
  I2: 8
  I1: 9
  I3: 11
  I4: 10
 */
void setup() {
  Serial.begin(9600);

  motors.setup(9, 8, A0, 11, 10, A1);
}

void loop() {
  motors.advance(100);
}
