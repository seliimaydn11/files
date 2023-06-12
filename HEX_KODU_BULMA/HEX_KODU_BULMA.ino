#include <IRremote.h>
int RECV_PIN =3;
IRrecv irrecv(3);
decode_results results;
void setup() {
 
Serial.begin(9600);
Serial.println("Enabling IRin");
irrecv.enableIRIn();
Serial.println("Enabled IRin");
}

void loop() {
  if(irrecv.decode(&results)){
    Serial.println(results.value,HEX);
    irrecv.resume();
  }
delay(100);
}
