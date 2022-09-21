#include <Adafruit_CircuitPlayground.h>

float temperature_value;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  // Temperature in Celcius
  temperature_value = CircuitPlayground.temperature();

  Serial.print("Temperature: ");
  Serial.println(temperature_value);
  
  delay(500);

  // Challenge: When the temperature is rising, play a tone 
  // that gets faster the higher the value is. Also turn on the NeoPixels to 
  // show a red color that indicates that it's getting too hot
