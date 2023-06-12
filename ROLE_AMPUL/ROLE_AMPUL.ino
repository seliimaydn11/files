#include <SoftwareSerial.h>
SoftwareSerial port1(10, 11);
char gelen_komut;
#define role 8
void setup() {
  pinMode(role, INPUT);
  Serial.begin(9600);
  port1.begin(9600);

}

void loop() {
  while (port1.available() > 0){
    gelen_komut=port1.read();
    if(gelen_komut=='1'){
      digitalWrite(role,HIGH);
    }
   else if(gelen_komut=='0'){
    digitalWrite(role,LOW); 
   }
  }

  }
