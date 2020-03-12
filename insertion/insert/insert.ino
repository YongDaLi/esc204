/*
 * Yong Da Li
 * Tuesday, March 3, 2020
 * 
 * finished the insertion mechanical build with a drawer sliders and a strong servo
 * testing the code
 * 
 * notes:
 * remember to connec the GND of the battery to the GND of the Arduino
 *    indicator LED for battey power is very useful
 * the current setting works well for the longer shaft, lower mounting hole
 *    able to push itself backwards
 * potentiometer pin out (from back) = VCC, signal, GND
 * servo pin out = red-VCC, brown-GND, orange-PWM
 * 
 * if port doesn't have permission, need to give access
 * terminal: `sudo chmod a+rw /dev/ttyACM0` where tty* is the port
*/

#include <Servo.h>

// pins **make sure GND of BATT+ is tied to GND on Arduino
const int servoPin = 13;

// control parameters
const int stepSize = 1; // degrees
const int stepDelay = 15; //ms
const int backwardLimit = 95;
const int forwardLimit = 30;

// global variables
char incoming=0;
int pos=0;

// servo object
Servo myservo;

void setup() {
  Serial.begin(9600);
  myservo.attach(servoPin);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  if (Serial.available() > 0){
    incoming=Serial.read();

    Serial.print("received: ");
    Serial.println(incoming);
  } 

  /*
   * < = step forward
   * > = step backward
   * a = go forward to limit
   * d = go backward to limit
   */
  switch (incoming){
    case '<':
      stepForward();
      break;
    case '>':
      stepBackward();
      break;
    case 'a':
      forward();
      break;
    case 'd':
      backward();
    default:
      break;
  }
}

// increment by 5 degrees
void stepForward(){
  // get current position
  pos = myservo.read();
  myservo.write(pos-5);

  Serial.print("*forward -> ");
  Serial.println(pos);
  
  delay(15);
}

// decrement by 5 degrees
void stepBackward(){
  // get current position
  pos = myservo.read();
  myservo.write(pos+5);

  Serial.print("*backward -> ");
  Serial.println(pos);
  
  delay(15);
}

// forward to limit
void forward(){
  pos = myservo.read();
  while (pos > forwardLimit){
    pos = pos - stepSize;
    myservo.write(pos);
    delay(stepDelay);
  }
}

// backward to limit
void backward(){
  pos = myservo.read();
  while (pos < backwardLimit){
    pos = pos + stepSize;
    myservo.write(pos);
    delay(stepDelay);
  }
}
