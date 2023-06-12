#include <Servo.h>
Servo servo1,servo2,servo3,servo4,servo5,servo6,servo7,servo8;
void setup() {
 
 servo1.attach(2);
 servo2.attach(3);
 servo3.attach(4);
 servo4.attach(5);
 servo5.attach(6);
 servo6.attach(7);
 servo7.attach(8);
 servo8.attach(9);

}

void loop() {
 baslangic;
 delay(5000);
 otur;
 delay(5000);

}
void baslangic(){

servo1.write(90);
servo2.write(90);
servo3.write(90);
servo4.write(90);
servo5.write(90);
servo6.write(90);
servo7.write(90);
servo8.write(90);
}
void otur(){
servo1.write(180);
servo2.write(180);
servo3.write(180);
servo4.write(180);
servo5.write(90);
servo6.write(90);
servo7.write(90);
servo8.write(90);




}