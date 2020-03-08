#define enableA 5   // Connected to Left Motor
#define MotorA1 6
#define MotorA2 7
 
#define enableB 8  //Connected to Right Motor
#define MotorB1 9
#define MotorB2 10

void go_forward() {
  //enabling motor A and B
  digitalWrite (enableA, HIGH);
  digitalWrite (enableB, HIGH);
   
  // Move forward
  digitalWrite (MotorA1, LOW);
  digitalWrite (MotorA2, HIGH);
  digitalWrite (MotorB1, LOW);
  digitalWrite (MotorB2, HIGH);
 
}
void go_backwards() {
  //enabling motor A and B
  digitalWrite (enableA, HIGH);
  digitalWrite (enableB, HIGH);
   
  // Go backwards
  digitalWrite (MotorA1,HIGH);
  digitalWrite (MotorA2,LOW);  
  digitalWrite (MotorB1,HIGH);
  digitalWrite (MotorB2,LOW);  
   
}

void go_right() {
  //enabling motor A and B
  digitalWrite (enableA, HIGH);
  digitalWrite (enableB, HIGH);
   
  // Turn right
  digitalWrite (MotorA1, LOW);
  digitalWrite (MotorA2, HIGH);
  digitalWrite (MotorB1,HIGH);
  digitalWrite (MotorB2,LOW); 
}
void go_left() {
  //enabling motor A and B
  digitalWrite (enableA, HIGH);
  digitalWrite (enableB, HIGH);
   
  // Turn left
  digitalWrite (MotorA1,HIGH);
  digitalWrite (MotorA2,LOW);  
  digitalWrite (MotorB1, LOW);
  digitalWrite (MotorB2, HIGH);
}
void stop_all() {
  digitalWrite (enableA, LOW);
  digitalWrite (enableB, LOW);
}
void setup() {
  // put your setup code here, to run once:
  pinMode(enableA,OUTPUT);
  pinMode(MotorA1,OUTPUT);
  pinMode(MotorA2,OUTPUT);
 
  // Set up right motor
  pinMode(enableB,OUTPUT);
  pinMode(MotorB1,OUTPUT);
  pinMode(MotorB2,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  go_forward();-*
}
