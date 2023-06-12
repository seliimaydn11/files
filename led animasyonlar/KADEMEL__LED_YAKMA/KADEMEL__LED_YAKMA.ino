#define pot A0
#define led 11

void setup() {
  Serial.begin(9600);
  Serial.print("kademeli led yakma:");
 
}

void loop() {

 int deger = analogRead(pot) ;
 deger = map(deger,0,1023,0,255);
 analogWrite(led,deger);

  Serial.println(deger);
}
