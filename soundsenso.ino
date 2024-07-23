#include <ESP32Servo.h>

Servo myServo;
const int servoPin = 19;

void setup() {
  myServo.attach(servoPin);
}

void loop() {
  myServo.write(0);
  delay(1000);
  
  myServo.write(-90);
  delay(1000);
  
  myServo.write(-180);
  delay(1000);
}




//#include <ESP32Servo.h>
//#include <Wire.h>
//#define echoPin 4               // CHANGE PIN NUMBER HERE IF YOU WANT TO USE A DIFFERENT PIN
//#define trigPin 2               // CHANGE PIN NUMBER HERE IF YOU WANT TO USE A DIFFERENT PIN
//Servo myServo;
//const int servoPin = 18;
//long duration, distance;
//void setup(){
//  Serial.begin (9600);
//  pinMode(trigPin, OUTPUT);
//  pinMode(echoPin, INPUT);
//  myServo.attach(servoPin);
//}
//void loop(){
//  // Move the servo to 0 degrees
//  myServo.write(0);
//  delay(1000); // Wait for 1 second
//  
//  // Move the servo to 90 degrees
//  myServo.write(90);
//  delay(1000); // Wait for 1 second
//  
//  // Move the servo to 180 degrees
//  myServo.write(180);
//  delay(1000); // Wait for 1 second
//  
//  digitalWrite(trigPin, LOW);
//  delayMicroseconds(2);
//  digitalWrite(trigPin, HIGH);
//  delayMicroseconds(10);
//  digitalWrite(trigPin, LOW);
//  
//  duration = pulseIn(echoPin, HIGH);
//  distance = duration / 58.2;
//  String disp = String(distance);
//
//  Serial.print("Distance: ");
//  Serial.print(disp);
//  Serial.println(" cm");
//  delay(1000);
//}
