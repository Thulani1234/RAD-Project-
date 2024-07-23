char data;

// Define motor pins
#include <Servo.h>

//for the neck
Servo myservo;
 
// for the hand
Servo servo1;//hand
Servo servo2;//hand

/*// Define the pins for servos
int servoPin1 = 10; // Change this to the pin you are using
int servoPin2 = 11; // Change this to the other pin you are using*/
int x=1;
// Define pins for IR sensors
const int leftIR = 2;
const int rightIR = 3;

// Define pins for ultrasonic sensor
const int trigPin = 24;
const int echoPin = 8;

// Define motor pins
const int leftMotor1 = 7;
const int leftMotor2 = 6;
const int rightMotor1 = 5;
const int rightMotor2 = 4;

void setup() {
// put your setup code here, to run once:
pinMode(26,OUTPUT);
pinMode(28,OUTPUT);
pinMode(30,OUTPUT);
pinMode(32,OUTPUT);
pinMode(34,OUTPUT);
pinMode(36,OUTPUT);
pinMode(38,OUTPUT);
pinMode(40,OUTPUT);
pinMode(42,OUTPUT);
pinMode(44,OUTPUT);

   Serial.begin(9600);

   myservo.attach(12);  // attaches the servo on pin 9

 // Attach servos to their respective pins
  servo1.attach(10);
  servo2.attach(11);
  // IR sensors
  pinMode(leftIR, INPUT);
  pinMode(rightIR, INPUT);
  
  // Ultrasonic sensor
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  // Motors
  pinMode(leftMotor1, OUTPUT);
  pinMode(leftMotor2, OUTPUT);
  pinMode(rightMotor1, OUTPUT);
  pinMode(rightMotor2, OUTPUT);
}

void moveForward() {
  // Move motors forward
  digitalWrite(leftMotor1, HIGH);
  digitalWrite(leftMotor2, LOW);
  digitalWrite(rightMotor1, HIGH);
  digitalWrite(rightMotor2, LOW);
}

void moveBackward() {
  // Move motors forward
  digitalWrite(leftMotor1, LOW);
  digitalWrite(leftMotor2, HIGH);
  digitalWrite(rightMotor1, LOW);
  digitalWrite(rightMotor2, HIGH);
}

void stopMotors() {
  // Stop motors
  digitalWrite(leftMotor1, LOW);
  digitalWrite(leftMotor2, LOW);
  digitalWrite(rightMotor1, LOW);
  digitalWrite(rightMotor2, LOW);
}

void turnLeftMotors() {
 digitalWrite(leftMotor1, HIGH);
  digitalWrite(leftMotor2, LOW);
  digitalWrite(rightMotor1, HIGH);
  digitalWrite(rightMotor2, LOW);
  
 
}
void turnRightMotors() {
  digitalWrite(leftMotor2, LOW);
  digitalWrite(rightMotor1, LOW);
  digitalWrite(rightMotor2, HIGH);

 
}

//neck servo
void neckServo() {
  myservo.write(90);  // move servo to 0 degrees
  delay(1000);       // wait for 1 second
  myservo.write(180); // move servo to 90 degrees
  delay(1000);       // wait for 1 second
  myservo.write(0); // move servo to 180 degrees
  delay(1000);       // wait for 1 second
}

void handServoToPut() {
 // Move servo 1
  servo1.write(180); // Move to 90 degrees
  servo2.write(0);
  delay(1000); // Wait for 1 second
  servo1.write(90); // Move to 0 degrees
  servo2.write(90);
  delay(1000); // Wait for 1 second

}
void handServoWhenWorking(){
 // Move servo 1
  servo1.write(40); // Move to 90 degrees
   servo2.write(130);
  delay(1000); // Wait for 1 second
  servo1.write(90); // Move to 0 degrees
  servo2.write(180);
  delay(1000); // Wait for 1 second
}
void smile() {
  // put your main code here, to run repeatedly:
  digitalWrite(26,HIGH);
  digitalWrite(28,LOW);
  digitalWrite(30,LOW);
  digitalWrite(32,LOW);
  digitalWrite(34,LOW);
  digitalWrite(36,LOW);
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  digitalWrite(42,LOW);
  digitalWrite(44,LOW);

  delay(200);
 
 digitalWrite(26,HIGH);
  digitalWrite(28,HIGH);
  digitalWrite(30,LOW);
  digitalWrite(32,LOW);
   digitalWrite(34,LOW);
  digitalWrite(36,LOW);
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  digitalWrite(42,LOW);
  digitalWrite(44,LOW);

  delay(200);

  digitalWrite(26,HIGH);
  digitalWrite(28,HIGH);
  digitalWrite(30,HIGH);
  digitalWrite(32,LOW);
   digitalWrite(34,LOW);
  digitalWrite(36,LOW);
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  digitalWrite(42,LOW);
  digitalWrite(44,LOW);

  delay(200);

digitalWrite(26,HIGH);
  digitalWrite(28,HIGH);
  digitalWrite(30,HIGH);
  digitalWrite(32,HIGH);
   digitalWrite(34,LOW);
  digitalWrite(36,LOW);
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  digitalWrite(42,LOW);
  digitalWrite(44,LOW);

  delay(200);

  digitalWrite(26,HIGH);
  digitalWrite(28,HIGH);
  digitalWrite(30,HIGH);
  digitalWrite(32,HIGH);
  digitalWrite(34,HIGH);
  digitalWrite(36,LOW);
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  digitalWrite(42,LOW);
  digitalWrite(44,LOW);

  delay(200);

  digitalWrite(26,HIGH);
  digitalWrite(28,HIGH);
  digitalWrite(30,HIGH);
  digitalWrite(32,HIGH);
  digitalWrite(34,HIGH);
  digitalWrite(36,HIGH);
  digitalWrite(38,LOW);
  digitalWrite(40,LOW);
  digitalWrite(42,LOW);
  digitalWrite(44,LOW);

  delay(200);

  digitalWrite(26,HIGH);
  digitalWrite(28,HIGH);
  digitalWrite(30,HIGH);
  digitalWrite(32,HIGH);
  digitalWrite(34,HIGH);
  digitalWrite(36,HIGH);
  digitalWrite(38,HIGH);
  digitalWrite(40,LOW);
  digitalWrite(42,LOW);
  digitalWrite(44,LOW);

  delay(200);

  digitalWrite(26,HIGH);
  digitalWrite(28,HIGH);
  digitalWrite(30,HIGH);
  digitalWrite(32,HIGH);
  digitalWrite(34,HIGH);
  digitalWrite(36,HIGH);
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  digitalWrite(42,LOW);
  digitalWrite(44,LOW);

  delay(200);

  digitalWrite(26,HIGH);
  digitalWrite(28,HIGH);
  digitalWrite(30,HIGH);
  digitalWrite(32,HIGH);
  digitalWrite(34,HIGH);
  digitalWrite(36,HIGH);
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  digitalWrite(42,HIGH);
  digitalWrite(44,LOW);

  delay(200);

  digitalWrite(26,HIGH);
  digitalWrite(28,HIGH);
  digitalWrite(30,HIGH);
  digitalWrite(32,HIGH);
  digitalWrite(34,HIGH);
  digitalWrite(36,HIGH);
  digitalWrite(38,HIGH);
  digitalWrite(40,HIGH);
  digitalWrite(42,HIGH);
  digitalWrite(44,HIGH);

  delay(200);



}


void loop() {
if(Serial.available()){
  data = Serial.read();
  Serial.print(data);
}


  // Read IR sensor values
  int leftIRValue = digitalRead(leftIR);
  int rightIRValue = digitalRead(rightIR);
  
  // Clear the triggersensor pin for ultrasonic 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Send a pulse to trigger the ultrasonic sensor
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Measure the duration of the pulse from ultrasonic sensor
  long duration = pulseIn(echoPin, HIGH);
  
  // Calculate distance in centimeters
  int distance = duration * 0.034 / 2;
   Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  // Check conditions for moving forward
  if (data == 1 &&leftIRValue == LOW && rightIRValue == LOW && distance > 10) {
    moveForward(); // Move forward if both IR sensors detect low values and ultrasonic sensor detects distance below 10cm
  }
  else if(leftIRValue == LOW && rightIRValue == LOW && distance < 10){
   turnRightMotors();
  }
  else if (leftIRValue == LOW && rightIRValue == LOW && distance > 10) {
    moveBackward(); // Move forward if both IR sensors detect low values and ultrasonic sensor detects distance below 10cm
  }
   else if(leftIRValue == HIGH && rightIRValue == HIGH && distance < 10) {
    while(x<2){
    stopMotors(); // Stop if conditions are not met
    delay(1000);
    handServoToPut();
    delay(10000);
   // neckServo();
    x++;

  }
   smile() ;
   }}
