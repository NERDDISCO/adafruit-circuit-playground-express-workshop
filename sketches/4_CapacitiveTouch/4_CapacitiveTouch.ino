#include <Adafruit_CircuitPlayground.h>

// Change this number to read a different pin from A1 to A7
#define CAP_PIN A1
  
void setup() {
  Serial.begin(9600); 
  CircuitPlayground.begin();
}
  
void loop() {
  // Print cap touch reading to the serial port
  Serial.println(CircuitPlayground.readCap(CAP_PIN));
  
  delay(100);

  // Challenge: Turn on a NeoPixel or play a tone when the cap is touched
}
