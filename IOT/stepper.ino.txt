#include <Stepper.h>
const int stepsPerRevolution = 2048; // for 28BYJ-48

Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
 myStepper.setSpeed(10);
  Serial.begin(9600);
}

void loop() {
 
 Serial.println("Clockwise rotation");
 myStepper.step(stepsPerRevolution);
 delay(1000);
 
 Serial.println("Counterclockwise rotation");
 myStepper.step(-stepsPerRevolution);
 delay(1000);
}
