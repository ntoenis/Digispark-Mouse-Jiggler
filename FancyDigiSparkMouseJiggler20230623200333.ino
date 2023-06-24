#include <DigiMouse.h>
//#include <DigiKeyboard.h>
long min = -300;
long max = 300;
unsigned int scroll = 0;
unsigned int click = 0;
unsigned int moveDelay = 75;
int cycleDelay = 1000;
int totalCycles = 0;
int i = 0;
int j = 0;

void setup(){
  DigiMouse.begin();
  pinMode(1, OUTPUT);
}

void loop() {
  // Simple Jiggle Code
  // while(true) {
  //   digitalWrite(1, HIGH);  
  //   DigiMouse.move(20,0,0); // 20px right
  //   DigiMouse.delay(100); // 50ms delay
  //   DigiMouse.move(-40,0,0); // -40px left
  //   DigiMouse.delay(100); // 50ms delay
  //   DigiMouse.move(20,0,0); // 20px right
  //   digitalWrite(1, LOW); // flash led to show move occured
  //   DigiMouse.delay(10000); // wait 30 secs
  // }
  while(j <= totalCycles || totalCycles == 0) {
    j++; // add to cycle count
    digitalWrite(1, HIGH); // starting jiggle led notification
    // generating random (x,y) positions
    float randxDistance = random(min, max); 
    float randyDistance = random(min, max); 
    // Mouse Movements
    DigiMouse.move(randxDistance, randyDistance, scroll); // Move to Positive position
    DigiMouse.delay(moveDelay); // delay movement by moveDelay
    DigiMouse.move(-randxDistance,-randyDistance,-scroll); // Move to Negative Position
    // if click enabled click "click" times during move
    if (click >= 1){
      for (int i=0; i < click; i++){
        DigiMouse.setButtons(1<<0); // Hold left mouse button
        DigiMouse.delay(moveDelay); // delay movement by moveDelay
        DigiMouse.setButtons(0); // Unclick all mouse buttons
        DigiMouse.delay(moveDelay); // delay movement by moveDelay
      }
    }
    digitalWrite(1, LOW); // flash led to show move occured
    DigiMouse.delay(cycleDelay); // wait before next "jiggle"
  }
}