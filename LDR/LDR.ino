const int led=8,ldrPin=A0;
int ldr_deger;
void setup() {
 pinMode(led,OUTPUT);
 pinMode(ldrPin,INPUT);
 Serial.begin(9600);
}

void loop() {
 ldr_deger=analogRead(ldrPin);
 if(ldr_deger<=250){
  digitalWrite(led,HIGH);
 }
 else{
  digitalWrite(led,LOW);
 }
 Serial.println(ldr_deger);
delayMicroseconds(500000);
}
