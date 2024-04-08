#include<Servo.h>

Servo myservo;

void setup() {
  myservo.attach(9);
}

void loop() {
  // Initial movement and slow return (executed at the beginning)
  myservo.write(50);
  myservo.write(170); // Move to final position before delay
  delay(200); // Delay for 1 second (adjustable)

  int steps = 110; // Number of steps for slow movement (adjustable)
  for (int i = 0; i < steps; i++) {
    myservo.write(map(i, 0, steps - 1, 170, 50)); // Map position for each step
    delay(20); // Delay between steps (adjustable)
  }

  // 24 hour wait (executed at the end)
  delay(86400000); // Delay for 24 hours (86400 seconds)
}
