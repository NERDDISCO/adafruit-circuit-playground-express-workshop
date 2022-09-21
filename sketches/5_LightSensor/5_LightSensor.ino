#include <Adafruit_CircuitPlayground.h> // include the adafruit circuit playground library 

// this variable will store our light sensor value allowing us to do THINGS with it
int value; 

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  // update "value" to store the light sensor reading
  value = CircuitPlayground.lightSensor();
  
  Serial.print("Light Sensor: ");
  Serial.println(value);
  
  delay(250);

  // Challenge: Use the lightSensor to create a low tone 
  // if it's dark and a high tone if it's light
}
