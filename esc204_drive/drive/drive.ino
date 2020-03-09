// Coco Huang's code

/* Sample Rover Control
 * Wednesday, March 4, 2020
 * 
 * spins motors according to Serial input
 * 
 * hardest part
 * ===========
 * battery pack was broken and i didn't realize
 * 
 * ==
 */

// Include
#include <Servo.h>

//Pin definition
#define RightEnA 10
#define RightEnB 11 
#define RightIn1 42 
#define RightIn2 40 
#define RightIn3 38 
#define RightIn4 36 

#define LeftEnA 3 
#define LeftEnB 4 
#define LeftIn1 37 
#define LeftIn2 39 
#define LeftIn3 41 
#define LeftIn4 43 

#define StepPin 1 // I randomly chose these pins
#define DirPin 2 // Diddo

#define ServoPin 5 // Diddo

// Headers
void forward(int speed);
void backward(int speed);
void turn_left(int speed);
void turn_right(int speed);
void stop(); // Stop stops rover and lead screw

void lead_screw(int steps, int speed, bool direction); // Moves finite step

void insert();
void extract();

// Global setups

char val = 0;
Servo insertion;
int ServoPos = 0;

void setup() {
    //Allow serial control
    Serial.begin(9600);
    Serial.println("not dead");
    
    //Set control pins to output
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

    // Set stepper motor pins
    pinMode(StepPin, OUTPUT);
    pinMode(DirPin, OUTPUT);

    // Set servo pin
    insertion.attach(ServoPin);
}

void loop() {
    if (Serial.available()){
    val = Serial.read();
    Serial.println(val);
    
    //Direction control
    if (val == 'w') //Forward
    {
        forward(200);
    }
    else if (val == 's') //Backward
    {
        backward(200);
    }
    else if (val == 'a') //Left
    {
        turn_left(100);
    }
    else if (val == 'd') //Right
    {
        turn_right(100);
    }
    else if (val == 'k') //Stop
    {
        stop();
    }
    else if (val == 'q') // Lead screw left
    {
        lead_screw(100, 200, 0); // test to see which way it goes
    }
    else if (val == 'e') // Lead screw right
    {
        lead_screw(100, 200, 1); // test to see which way it goes
    }
    else if (val == 'i') // Put IN
    {
        insert();
    }
    else if (val == 'o') // Pull OUT
    {
        extract();
    }
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

void stop() {
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
    digitalWrite(DirPin, LOW);
    digitalWrite(StepPin, LOW);
}

/* Lead screw turning functions
 *
 * WARNING: I DID NOT CHECK THAT THE LEAD SCREW DOES NOT EXCEED ITS BOUNDS!!!
 *
 * steps = [0,600] so it doesn't exceed its bounds
 * speed = [0,255]. This mapping is not linear, nor does 0 => no speed.
 * direction = 0, 1
 *
 * void lead_screw(int steps, int speed)
 *
 * TODO:
 * > Map steps to distance
 *
 */

void lead_screw(int steps, int speed, bool direction) {
    int max_time = 600;

    if(steps>600) {
    steps = 600;
    }

    // Set direction based on direction
    digitalWrite(DirPin, direction);

    for(int i = 0; i<steps; i++) {
    digitalWrite(StepPin, HIGH);
    delayMicroseconds(max_time - speed); // Will this work?
    digitalWrite(StepPin, LOW);
    delayMicroseconds(max_time - speed);
    }
}

/* Insertion function
 * 
 * void insert()
 * void extract()
 * 
 * WARNING: I assume its rotation goes from [0,180] degrees
 * 
 */

void insert() {
    /* 1. Push button
     * 2. Unspin servo
     * 
     * Increasing servo angle
     * 
     * 
     */
    int max_servo = 180;

    for(i = ServoPos; i <= max_servo; i++) {
    insertion.write(i);
    delay(15);
    }

    // Just to ensure it's all the way out:
    insertion.write(max_servo);
}

void extract() {
    /* 1. Push button
     * 2. Unspin servo
     * 
     * Decreasing servo angle
     * 
     * 
     */

    int min_servo = 0;

    while(i = ServoPos; i >= min_servo; i--) {
    insertion.write(i);
    delay(15);
    }
    // Just to ensure it's all the way back:
    insertion.write(min_servo);
}