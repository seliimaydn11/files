#include <Servo.h>
Servo servo1;
int sayac =0;
void setup() {

servo1.attach(3);
servo1.write(sayac);

}
void loop() {

if (sayac<=90){

  sayac++;
  servo1.write(sayac);
}

}
