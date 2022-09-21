#include <Adafruit_CircuitPlayground.h>

// Will be executed once the microcontroller is starting
void setup() {
  // https://www.arduino.cc/reference/en/language/functions/communication/serial/begin/
  Serial.begin(9600);
  
  // Initialize Circuit Playground library
  CircuitPlayground.begin();
  
  delay(3000);

  Serial.println("Started up!");
}

// Will be executed over and over
void loop() {
  Serial.println("Hello World"); // This prints a message once per loop!

  // Challenge: Change the above to include your name instead of "world"

  // Challenge: Add a second message below:

  // Challenge: Add pseudocode for a program that blinks an LED on and off
    
  delay(250); // Delay between readings and print statements - challenge: change 250 to another number 
}
