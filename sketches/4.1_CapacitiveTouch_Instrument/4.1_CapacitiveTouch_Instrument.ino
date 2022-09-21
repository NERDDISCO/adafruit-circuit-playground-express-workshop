#include <Adafruit_CircuitPlayground.h>

#define CAP_THRESHOLD   800
#define DEBOUNCE        50
#define TONE_LENGTH     250

uint8_t pads[] = {3, 2, 0, 1, 6, 9, 10}; // this lists all of the touch pads 
uint8_t numberOfPads = sizeof(pads)/sizeof(uint8_t);

void takeAction(uint8_t pad) {
  
  // Play a different tone for each pad
  switch (pad) {

    // A1
    case 6:
      Serial.println("A1"); 
      CircuitPlayground.playTone(300, TONE_LENGTH);
      break;
      
    // A2 
    case 9:
      Serial.println("A2"); 
      CircuitPlayground.playTone(200, TONE_LENGTH);
      break;
      
    // A3 
    case 10:
      Serial.println("A3"); 
      CircuitPlayground.playTone(100, TONE_LENGTH);
      break;
    
    // A4
    case 3:
      Serial.println("A4"); 
      CircuitPlayground.playTone(5000, TONE_LENGTH);
      break;
      
    // A5
    case 2:
      Serial.println("A5"); 
      CircuitPlayground.playTone(4000, TONE_LENGTH);
      break;
      
    // A6
    case 0:
      Serial.println("A6"); 
      CircuitPlayground.playTone(1000, TONE_LENGTH);
      break;
      
    // A7
    case 1:
      Serial.println("A7"); 
      CircuitPlayground.playTone(800, TONE_LENGTH);
      break;
      
    default:
      break;
  }
}

boolean capButton(uint8_t pad) {
  // Check if capacitive touch exceeds threshold.
  if (CircuitPlayground.readCap(pad) >= CAP_THRESHOLD) {
    return true;  
  } else {
    return false;
  }
}

void setup() {
  Serial.begin(9600); 
  CircuitPlayground.begin();
}

void loop() {
  // Loop over every pad.
  for (int i = 0; i < numberOfPads; i++) {
    
    // Check if pad is touched
    if (capButton(pads[i])) {
      
      // Do something
      takeAction(pads[i]);
      
      // But not too often
      delay(DEBOUNCE);
    }
  }
}
