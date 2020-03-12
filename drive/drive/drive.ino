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

// Headers
void forward(int speed);
void backward(int speed);
void turn_left(int speed);
void turn_right(int speed);
void stop(); // Stop stops rover and lead screw


// Global setups

char val = 0;


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