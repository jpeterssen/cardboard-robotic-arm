#include <Arduino.h>
#include <Servo.h>

Servo shoulderServo;

void setup() {
  shoulderServo.attach(9);
}

//basic sweep test
void loop() {
  
  for(int pos = 0; pos < 180; ++pos) {
    shoulderServo.write(pos);
    delay(10);
  }

  for(int pos = 180; pos > 0; --pos) {
    shoulderServo.write(pos);
    delay(10);
  }

}
