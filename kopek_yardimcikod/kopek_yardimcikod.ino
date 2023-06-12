#include <Servo.h>
char gelen_rakam;
unsigned int mesafe, sure;
const int trig = 10, echo = 11;

Servo servo1, servo2, servo3, servo4, servo5, servo6, servo7, servo8;
void setup() {
  for (int i = 2; i < 11; i++) {
    pinMode(i, OUTPUT);
  }
  pinMode(echo, INPUT);
  servo1.attach(2); servo2.attach(3); servo3.attach(4); servo4.attach(5);
  servo5.attach(6); servo6.attach(7); servo7.attach(8); servo8.attach(9);
  Serial.begin(9600);
}

void loop() {
  while (Serial.available() > 0) {
    gelen_rakam = Serial.read();

    while (true) {

      if (gelen_rakam == '1') {
        ileri();
        delay(150);
        ileri2();
      }
      if (gelen_rakam == '2') {
        servo2.write(45);
      }
      if (gelen_rakam == '3') {
        servo3.write(45);
      }
      if (gelen_rakam == '4') {
        servo4.write(45);
      }
      if (gelen_rakam == '5') {
        servo5.write(45);
      }
      if (gelen_rakam == '6') {
        servo6.write(45);
      }
      if (gelen_rakam == '7') {
        servo7.write(45);
      }
      if (gelen_rakam == '8') {
        servo8.write(45);
      }
      if (gelen_rakam == '9') {
        otur();
      }
      if (gelen_rakam == '0') {
        servo1.write(90);
        servo2.write(90);
        servo3.write(90);
        servo4.write(90);
        servo5.write(90);
        servo6.write(90);
        servo7.write(90);
        servo8.write(90);
      }
      else {
        for (int i = 2; i < 11; i++) {
          digitalWrite(i, LOW);
        }
      }
    }
  }
  digitalWrite(trig, 0); delayMicroseconds(2);
  digitalWrite(trig, 1); delayMicroseconds(10);
  digitalWrite(trig, 0);
  sure = pulseIn(echo, 1);
  mesafe = (sure / 2) / 29.1;
  if (mesafe <= 20 & mesafe >= 15) {
    otur();
  }
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
void ileri() {
  servo1.write(90);
  servo2.write(45);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
  servo6.write(135);
  servo7.write(90);
  servo8.write(90);
}
void ileri2() {
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(135);
  servo5.write(90);
  servo6.write(90);
  servo7.write(90);
  servo8.write(135);
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
