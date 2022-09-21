// include the Circuit Playground library so we can use its functions, etc.
#include <Adafruit_CircuitPlayground.h>

void setup() {
  // initialize the Circuit Playground
  CircuitPlayground.begin(); 
}

void loop() {
  // set the single color LED D13 to HIGH / set LED to "on" by sending it voltage 
  CircuitPlayground.redLED(HIGH); 
  // delay for 500 milliseconds = the LED will be on for this amount of time
  delay(500); 

  // set the single color LED D13 to LOW or 0V 
  CircuitPlayground.redLED(LOW); 
  // delay for 500 milliseconds = the LED will be off for this amount of time
  delay(500); 

  // Challenge: Create "SOS" as morse code
  // see https://en.wikipedia.org/wiki/Morse_code
}
