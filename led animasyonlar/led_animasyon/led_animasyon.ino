int t=100 ;


void setup() {
  pinMode(11,HIGH);
  pinMode(10,HIGH);
  pinMode(9,HIGH);
    pinMode(8,HIGH);
}

void loop() {
  digitalWrite(11,HIGH);
  delay(t);
digitalWrite(10,HIGH);
  delay(t);
  digitalWrite(9,HIGH);
  delay(t);
digitalWrite(10,LOW);
  delay(t);
  digitalWrite(8,HIGH );
  delay(t);
  digitalWrite(11,LOW);
  delay(t);
digitalWrite(10,LOW);
  delay(t);
  digitalWrite(9,LOW );
  delay(t);
  digitalWrite(10,LOW);
  delay(t);
  digitalWrite(8,LOW );
  delay(t);
}
