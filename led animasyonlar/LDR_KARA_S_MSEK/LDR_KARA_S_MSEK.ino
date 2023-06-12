int t=100;
int ldrdeger =analogRead(A0);
int Ldr=A0;
int i=0;
#define Ldr A0

void setup() {
  Serial.begin(9600);
  Serial.println(ldrdeger);
  delay(t);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,INPUT_PULLUP);
}

void loop() {

  if ((ldrdeger)>15){
  for(i;i<5;i++);
  Serial.println("ŞİMŞEK ÇAKIYOR");
  digitalWrite(13,1); delay(t);
  digitalWrite(12,1); delay(t);
  digitalWrite(11,1); delay(t);
  digitalWrite(10,1); delay(t);

  digitalWrite(13,0); delay(t);
  digitalWrite(12,0); delay(t);
  digitalWrite(11,0); delay(t);
  digitalWrite(10,0); delay(t);
  }
  Serial.println("ÇAKIŞ SÖNDÜ");
  delay(200);

  
}
