#include <Servo.h>

// Declare servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

unsigned long startTime;
bool sweepCompleted = false;

void setup() {
  // Attach servos to pins
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(6);

  // Initialize timer
  startTime = millis();
}

void loop() {
  unsigned long currentTime = millis();

  // Perform sweep for 2 seconds
  if (currentTime - startTime < 2000) {
    for (int pos = 0; pos <= 180; pos += 5) {
      moveAllServos(pos);
      delay(15);
    }
    for (int pos = 180; pos >= 0; pos -= 5) {
      moveAllServos(pos);
      delay(15);
    }
  } else if (!sweepCompleted) {
    // After sweep, lock all servos to 90°
    moveAllServos(90);
    sweepCompleted = true;
  }

  // Optionally add walking code here
}

// Function to set all servo angles
void moveAllServos(int angle) {
  servo1.write(angle);
  servo2.write(angle);
  servo3.write(angle);
  servo4.write(angle);
}
