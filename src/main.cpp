#include <Servo.h>  // Include the Servo library

Servo myServo;      // Create a servo object

void setup() {
    myServo.attach(9);  // Attach servo to pin 9 (PWM pin)
}

void loop() {
    // Sweep from 0 to 180 degrees
    for (int pos = 0; pos <= 180; pos++) {
        myServo.write(pos);   // Move to position
        delay(15);            // Wait for servo to reach position
    }

    // Sweep back from 180 to 0 degrees
    for (int pos = 180; pos >= 0; pos--) {
        myServo.write(pos);
        delay(15);
    }
}