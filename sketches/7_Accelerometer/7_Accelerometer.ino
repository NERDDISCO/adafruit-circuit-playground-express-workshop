#include <Adafruit_CircuitPlayground.h>

float X, Y, Z;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  X = CircuitPlayground.motionX();
  Y = CircuitPlayground.motionY();
  Z = CircuitPlayground.motionZ();

  Serial.print("X: ");
  Serial.println(X);
  
  Serial.print("Y: ");
  Serial.println(Y);
  
  Serial.print("Z: ");
  Serial.println(Z);

  Serial.println("------");

  delay(500);

  // Challenge: I would love to provide you with something, but I never used this in any
  // real world example, so if you have an idea what could be done here, open an 
  // issue in the repo! <3
}
