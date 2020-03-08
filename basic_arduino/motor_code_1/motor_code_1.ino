const int en1 = 5;
const int in1 = 6;
const int in2 = 7;


void setup() {
  // put your setup code here, to run once:
  pinMode(en1, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(en1, 255);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);

}
