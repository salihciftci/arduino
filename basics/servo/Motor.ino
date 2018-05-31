
#include <CheapStepper.h>

// next, declare the stepper
// and connect pins 8,9,10,11 to IN1,IN2,IN3,IN4 on ULN2003 board

CheapStepper stepper (8,9,10,11); 

void setup() {
}

void loop() {
  stepper.step(true);
}
