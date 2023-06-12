#define k1 13
#define k2 12
#define m1 11
#define m2 10

int t = 30;

void setup() {
  for (int i = 10; i < 14; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {

  for (int i = 0; i < 4; i++)
  {
    digitalWrite(k1, 1);
    digitalWrite(k2, 1);
    delay(t);
    digitalWrite(k1, 0);
    digitalWrite(k2, 0);
    delay(t);

  }

  for (int i = 0; i < 4; i++)

  digitalWrite(m1, 1);
  digitalWrite(m2, 1);
  delay(t);
  digitalWrite(m1, 0);
  digitalWrite(m2, 0);
  delay(t);


}
