#include <Adafruit_CircuitPlayground.h>

float sound_value;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  // Take 10 milliseconds of sound data to calculate
  sound_value = CircuitPlayground.mic.soundPressureLevel(10);
  
  Serial.print("Sound Sensor: ");
  Serial.println(sound_value);

  delay(90);

  // Challenge: Use the soundSensor to detect sound, if the sound is beyond a certain
  // threshold, you turn on the NeoPixels and spread that value accross all the NeoPixels, 
  // changing the color the higher the sound_value goes
}
