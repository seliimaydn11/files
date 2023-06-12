#include <SoftwareSerial.h>
SoftwareSerial port(12, 13);
#include <Servo.h>
Servo servo1, servo2, servo3, servo4, servo5, servo6, servo7, servo8;
int sure;
unsigned int mesafe, komutlar;
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
    if (mesafe <= 20 & mesafe >= 15) {
      otur();
    }

    while (1) {

      if (gelen_veri == 'F') {
        ileri();
        delay(150);
        ileri2();
        else {
          break;
        }
      }
      if (gelen_veri == 'B') {
        servo2.write(45);
        else {
          break;
        }
      }
      if (gelen_veri == 'R') {
        servo3.write(45);
        else {
          break;
        }
      }
      if (gelen_veri == 'L') {
        servo4.write(45);
      }
      if (gelen_veri == '5') {
        servo5.write(45);
      }
      if (gelen_veri == '6') {
        servo6.write(45);
      }
      if (gelen_veri == '7') {
        servo7.write(45);
      }
      if (gelen_veri == '8') {
        servo8.write(45);
      }
      if (gelen_veri == 'V') {
        otur();
      }
      if (gelen_veri == '0') {
        servo1.write(90);
        servo2.write(90);
        servo3.write(90);
        servo4.write(90);
        servo5.write(90);
        servo6.write(90);
        servo7.write(90);
        servo8.write(90);
      }
    }
    }
  }

void ileri() {
  servo1.write(90);
  servo2.write(45);
  servo3.write(90);
  servo4.write(45);
  servo5.write(90);
  servo6.write(45);
  servo7.write(90);
  servo8.write(45);
}
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
