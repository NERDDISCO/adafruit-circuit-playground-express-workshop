#include <Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin();
}

void loop() {
  // turns all the LEDs OFF / clear color data
  CircuitPlayground.clearPixels(); 
  delay(500); 

  // CircuitPlayground.setPixelColor(pixel number, Red, Green, Blue)
  // RGB is on a scale of 0 to 255 
  // 255 means 100% that color
  // To turn an LED to red we set red to 100% by typing 255 and the other values for Green and Blue to 0 
  CircuitPlayground.setPixelColor(0, 255,   0,   0);
  CircuitPlayground.setPixelColor(1, 128, 128,   0);
  CircuitPlayground.setPixelColor(2,   0, 255,   0);
  CircuitPlayground.setPixelColor(3,   0, 128, 128);
  CircuitPlayground.setPixelColor(4,   0,   0, 255);
  
  // Instead of using a RGB value, we can also use an HEX color
  CircuitPlayground.setPixelColor(5, 0xFF0000);
  CircuitPlayground.setPixelColor(6, 0x808000);
  CircuitPlayground.setPixelColor(7, 0x00FF00);
  CircuitPlayground.setPixelColor(8, 0x008080);
  CircuitPlayground.setPixelColor(9, 0x0000FF);
 
  delay(1000); 

  // Challenge: Create an circle-animation where the light is moving 
  // from the bottom left to the top left, then to the top right and finally to the 
  // bottom right. Only one LED is on at a time
}
