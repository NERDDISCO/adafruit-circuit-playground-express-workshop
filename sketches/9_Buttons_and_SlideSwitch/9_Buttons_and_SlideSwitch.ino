#include <Adafruit_CircuitPlayground.h>

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();

  // Lower brightness for all NeoPixels, default is 30
  CircuitPlayground.setBrightness(5);
}

void loop() {

  if (CircuitPlayground.leftButton()) {
    CircuitPlayground.redLED(HIGH); 
  } else {
    CircuitPlayground.redLED(LOW); 
  }

  if (CircuitPlayground.rightButton()) {
    CircuitPlayground.playTone(150, 100);
  }

  if (CircuitPlayground.slideSwitch()) {
    CircuitPlayground.clearPixels();

    for (int i = 0; i < 10; i++) {
      CircuitPlayground.setPixelColor(i, random(25, 175), random(25, 175), random(25, 175));
    }
  } else {
    CircuitPlayground.clearPixels();
  }

  delay(100);

  // Challenge: Enable the lightSensor when pressing a button to activate all NeoPixels when
  // the area around you is dark or light
}
