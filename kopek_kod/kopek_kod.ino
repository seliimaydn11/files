#include <SoftwareSerial.h>
SoftwareSerial port(12, 13);
#include <Servo.h>
Servo servo1, servo2, servo3, servo4, servo5, servo6, servo7, servo8;
int sure;
unsigned int mesafe;
char gelen_veri;
const int trig = 10, echo = 11;
void setup() {
  Serial.begin(9600);
  port.begin(9600);
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);
  servo6.attach(7);
  servo7.attach(8);
  servo8.attach(9);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  baslangic();
}

void loop() {
  digitalWrite(trig, 0); delayMicroseconds(2);
  digitalWrite(trig, 1); delayMicroseconds(10);
  digitalWrite(trig, 0);
  sure = pulseIn(echo, 1);
  mesafe = (sure / 2) / 29.1;
  while (port.available() > 0) {
    gelen_veri = port.read();

    while (gelen_veri == 'F') {
      ileri();
      delay(250);
      baslangic();
      break;
    }
    while (gelen_veri == 'B') {
      geri();
      break;
    }
    while  (gelen_veri == 'R') {
      sag() ;
      break;
    }
    while (gelen_veri == 'L') {
      sol() ;
      break;
    }
    while (gelen_veri == 'V') {
      otur() ;
      break;
    }
  }
  if (mesafe <= 20 & mesafe >= 15) {
    otur();
    delay(3500);
    baslangic();
    
  }
}

void ileri() {
  servo1.write(90);
  servo2.write(45);
  servo3.write(90);
  servo4.write(45);
  servo5.write(90);
  servo6.write(135);
  servo7.write(90);
  servo8.write(45);
  delay(250);
  
}
/*
  void ileri2() {
  servo1.write(90);
  servo2.write(135);
  servo3.write(90);
  servo4.write(135);
  servo5.write(90);
  servo6.write(135);
  servo7.write(90);
  servo8.write(135);
}
 */
void geri() {
  servo1.write(90);
  servo2.write(65);
  servo3.write(90);
  servo4.write(65);
  servo5.write(90);
  servo6.write(65);
  servo7.write(90);
  servo8.write(65);
}
void sol() {
  servo3.write(150);
  servo4.write(120);
  servo5.write(150);
  servo6.write(120);
}
void sag() {
  servo1.write(150);
  servo2.write(120);
  servo7.write(150);
  servo8.write(120);
}
void otur() {
  servo2.write(90);
  servo1.write(50);
  servo4.write(100);
  servo3.write(130);
  servo6.write(120);
  servo8.write(60);
  servo5.write(80);
  servo7.write(80);
}
void baslangic() {
  servo2.write(90);
  servo1.write(90);
  servo4.write(90);
  servo3.write(90);
  servo6.write(90);
  servo8.write(90);
  servo5.write(90);
  servo7.write(90);

}
