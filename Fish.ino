#include<Servo.h>

Servo myservo;

void setup() {
  myservo.attach(9);
}

void loop() {
  myservo.write(50);
  delay(86400);
  myservo.write(170);
  delay(1000);

  // New lines for slow return
  int steps = 150; // Number of steps for slow movement (adjustable)
  for (int i = 0; i < steps; i++) {
    myservo.write(map(i, 0, steps - 1, 170, 50)); // Map position for each step
    delay(20); // Delay between steps (adjustable)
  }
}
