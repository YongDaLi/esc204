/*
 * Yong Da Li, David Chu
 * Tuesday, March 10, 2020
 * 
 * integration of all modules for milestone 1
 */

#include <Servo.h>

// ----- motors ---------
const int RightEnA = 6;
const int RightEnB = 7;
const int RightIn1 = 42;
const int RightIn2 = 40;
const int RightIn3 = 38;
const int RightIn4 = 36; 

const int LeftEnA = 3;
const int LeftEnB = 4;
const int LeftIn1 = 37;
const int LeftIn2 = 39;
const int LeftIn3 = 41;
const int LeftIn4 = 43;

void forward(int speed);
void backward(int speed);
void turn_left(int speed);
void turn_right(int speed);
void halt();


// --------- stepper motor (lead screw) ----------
const int stepPin = 9; // Digital ...I randomly chose these pins
const int dirPin =10; // Digital ...Diddo

const int delayMicro = 2000;

void drive_leadscrew();
void rotate_full_1();
void rotate_full_2();

// ------------- servo ----------
Servo myservo;
int servoPos = 0; // dummy position
const int ServoPin = 5; // PWM

// control parameters
const int stepSize = 1; // degrees
const int stepDelay = 15; //ms
const int backwardLimit = 95;
const int forwardLimit = 30;

void insert();
void extract();


// ------- serial communication
char incoming = 'q'; // dummy, holds incoming char

void setup() {
    // establish serial communication with Arduino
    Serial.begin(9600);

    // check connection
    Serial.println("not dead");
    
    // setup motor pints
    pinMode(RightEnA, OUTPUT);
    pinMode(RightEnB, OUTPUT);
    pinMode(RightIn1, OUTPUT);
    pinMode(RightIn2, OUTPUT);
    pinMode(RightIn3, OUTPUT);
    pinMode(RightIn4, OUTPUT);

    pinMode(LeftEnA, OUTPUT);
    pinMode(LeftEnB, OUTPUT);
    pinMode(LeftIn1, OUTPUT);
    pinMode(LeftIn2, OUTPUT);
    pinMode(LeftIn3, OUTPUT);
    pinMode(LeftIn4, OUTPUT);

    // setup servo pint
    myservo.attach(ServoPin);

    // setup stepper drive (A4988) pins
    pinMode(stepPin, OUTPUT);
    pinMode(dirPin, OUTPUT);
}

void loop() {
  
  if (Serial.available()){
    incoming = Serial.read();

    if(incoming >= 'a' && incoming <= 'z') {
      Serial.print("Recieved: ");
      Serial.println(incoming);
    }
    
    switch (incoming){
        // motor
        case 'w':
            forward(200);
            break;
        case 's':
            backward(200);
            break;
        case 'a':
            turn_left(100);
            break;
        case 'd':
            turn_right(100);
            break;
        
        case 'k':
            halt();
            break;
            
        // lead screw
        case 'q':
            rotate_full_1();
            break;
        case 'e':
            rotate_full_2();
            break;

        // servo
        case 'i':
            insert();
            break;
        case 'o':
            extract();
            break;

        default:
            break;
      }

    // reset variable
    incoming = 'q'; 
  }
}

/* Rover driving functions
 *
 * speed = [0,255]
 *
 * void forward(int speed)
 * void backward(int speed)
 * void turn_left(int speed)
 * void turn_right(int speed)
 * void stop()
 *
 *
 */

void forward(int speed) {
    digitalWrite(RightIn1, HIGH);
    digitalWrite(RightIn2, LOW);
    analogWrite(RightEnA, speed); 
    digitalWrite(RightIn3, HIGH);
    digitalWrite(RightIn4, LOW);
    analogWrite(RightEnB, speed); 
    digitalWrite(LeftIn1, HIGH);
    digitalWrite(LeftIn2, LOW);
    analogWrite(LeftEnA, speed); 
    digitalWrite(LeftIn3, HIGH);
    digitalWrite(LeftIn4, LOW);
    analogWrite(LeftEnB, speed); 
}

void backward(int speed) {
    digitalWrite(RightIn1, LOW);
    digitalWrite(RightIn2, HIGH);
    analogWrite(RightEnA, speed);  
    digitalWrite(RightIn3, LOW);
    digitalWrite(RightIn4, HIGH);
    analogWrite(RightEnB, speed);  
    digitalWrite(LeftIn1, LOW);
    digitalWrite(LeftIn2, HIGH);
    analogWrite(LeftEnA, speed); 
    digitalWrite(LeftIn3, LOW);
    digitalWrite(LeftIn4, HIGH);
    analogWrite(LeftEnB, speed); 
}

void turn_left(int speed) {
    digitalWrite(RightIn1, LOW);
    digitalWrite(RightIn2, HIGH);
    analogWrite(RightEnA, speed);
    digitalWrite(RightIn3, LOW);
    digitalWrite(RightIn4, HIGH);
    analogWrite(RightEnB, speed);  
    digitalWrite(LeftIn1, HIGH);
    digitalWrite(LeftIn2, LOW);
    analogWrite(LeftEnA, speed); 
    digitalWrite(LeftIn3, HIGH);
    digitalWrite(LeftIn4, LOW);
    analogWrite(LeftEnB, speed); 
}

void turn_right(int speed) {
    digitalWrite(RightIn1, HIGH);
    digitalWrite(RightIn2, LOW);
    analogWrite(RightEnA, speed);
    digitalWrite(RightIn3, HIGH);
    digitalWrite(RightIn4, LOW);
    analogWrite(RightEnB, speed);  
    digitalWrite(LeftIn1, LOW);
    digitalWrite(LeftIn2, HIGH);
    analogWrite(LeftEnA, speed); 
    digitalWrite(LeftIn3, LOW);
    digitalWrite(LeftIn4, HIGH);
    analogWrite(LeftEnB, speed); 
}

void halt() {
    // Stop Rover
    digitalWrite(RightIn1, LOW);
    digitalWrite(RightIn2, LOW);
    digitalWrite(RightIn3, LOW);
    digitalWrite(RightIn4, LOW);
    digitalWrite(LeftIn1, LOW);
    digitalWrite(LeftIn2, LOW);
    digitalWrite(LeftIn3, LOW);
    digitalWrite(LeftIn4, LOW);

    // Stop lead screw
    digitalWrite(dirPin, LOW);
    digitalWrite(stepPin, LOW);

}


// sends the required pulses, assuming direction is set
// 200 steps is 1 full rotation
void drive_leadscrew(int steps){
  for (int i = 0; i<steps; i++){
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(delayMicro);
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(delayMicro); 
  }
}


// full 360 degree rotation in 1 direction
void rotate_full_1(){
  // set direction
  digitalWrite(dirPin, HIGH);

  // rotate 200 steps = 1 rotation
  drive_leadscrew(200);
  
  Serial.println("rotated full 1");
}

// full 360 degree rotation in the other direction
void rotate_full_2(){
  // set direction opposte
  digitalWrite(dirPin, LOW);

  // rotate 200 steps = 1 rotation
  drive_leadscrew(200);

  Serial.println("rotated full 2");
}


// increment by 5 degrees
void stepForward(){
  // get current position
  servoPos= myservo.read();
  myservo.write(servoPos-5);

  Serial.print("*forward -> ");
  Serial.println(servoPos);
  
  delay(15);
}


// decrement by 5 degrees
void stepBackward(){
  // get current position
  servoPos= myservo.read();
  myservo.write(servoPos+5);

  Serial.print("*backward -> ");
  Serial.println(servoPos);
  
  delay(15);
}


// forward to limit
void insert(){
  servoPos = myservo.read();
  while (servoPos> forwardLimit){
    servoPos = servoPos - stepSize;
    myservo.write(servoPos);
    delay(stepDelay);
  }
}

// backward to limit
void extract(){
  servoPos = myservo.read();
  while (servoPos< backwardLimit){
    servoPos= servoPos + stepSize;
    myservo.write(servoPos);
    delay(stepDelay);
  }
}