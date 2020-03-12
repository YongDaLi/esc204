/* Yong Da Li
 * Wednesday, March 4, 2020
 * 
 * controls stepper motor for the leadscrew 
 * 'a'=left, 'b'=right 1 full rotation = 200 steps = 8mm travel
 */
 
// pins numbers
const int stepPin = 3; 
const int dirPin = 4; 

// control parameters
const int delayMicro = 2000; // delay<500us doesn't spin -> vibrates

// global variables
char incoming='q';
 
void setup() {
  Serial.begin(9600);
  
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
}

void loop() {
  if (Serial.available() > 1){
    incoming = Serial.read();
    
    Serial.print("received: ");
    Serial.println(incoming);
  }

  switch (incoming){
    case 'a':
      rotate_full_1();
      break;
    case 'd':
      rotate_full_2();
      break;
    default:
      break;
  }

  // reset variable
  incoming = 'q';
}

// sends the required pulses, assuming direction is set
// 200 steps is 1 full rotation
void drive(int steps){
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
  drive(200);
  
  Serial.println("rotated full 1");
}

// full 360 degree rotation in the other direction
void rotate_full_2(){
  // set direction opposte
  digitalWrite(dirPin, LOW);

  // rotate 200 steps = 1 rotation
  drive(200);

  Serial.println("rotated full 2");
}
