#include <Servo.h>

Servo myservo;  // create servo object to control a servo
int led1 = 9;   // LED 1 connected to digital pin 9
int led2 = 10;  // LED 2 connected to digital pin 10
int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(8);  // attaches the servo on pin 8 to the servo object
  pinMode(led1, OUTPUT);  // sets the LED 1 pin as output
  pinMode(led2, OUTPUT);  // sets the LED 2 pin as output
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    myservo.write(pos);  // tell servo to go to position in variable 'pos'
    delay(15);           // waits 15ms for the servo to reach the position
    if (pos <= 90) {
      digitalWrite(led1, HIGH);  // turn LED 1 on
      digitalWrite(led2, LOW);   // turn LED 2 off
    } else {
      digitalWrite(led1, LOW);   // turn LED 1 off
      digitalWrite(led2, HIGH);  // turn LED 2 on
    }
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);  // tell servo to go to position in variable 'pos'
    delay(15);           // waits 15ms for the servo to reach the position
    if (pos <= 90) {
      digitalWrite(led1, HIGH);  // turn LED 1 on
      digitalWrite(led2, LOW);   // turn LED 2 off
    } else {
      digitalWrite(led1, LOW);   // turn LED 1 off
      digitalWrite(led2, HIGH);  // turn LED 2 on
    }
  }
}
