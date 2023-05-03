#include <Adafruit_CircuitPlayground.h>

float sound_value;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}



void loop() {
  // Take 10 milliseconds of sound data to calculate
  sound_value = CircuitPlayground.mic.soundPressureLevel(100);
  
  Serial.println(sound_value);

  delay(1000);

  // Challenge: Take a look at the README in sketches/10_SoundSensor_logging for 
  // what is needed to get the data into a graph
}
