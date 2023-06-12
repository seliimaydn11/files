#include <SoftwareSerial.h>
SoftwareSerial port(12,13);
char gelen_komut;

void setup() {
 Serial.begin(9600);
 port.begin(9600);

}

void loop() {
 while (port.available()>0){
  gelen_komut=port.read();

  Serial.println(gelen_komut);
 }

}
