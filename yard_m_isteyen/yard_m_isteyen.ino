int trigPin = 13; //Mesafe sensörü pinleri
int echoPin = 12; //Mesafe sensörü pinleri
int motorPin = 3;
unsigned int zaman,mesafe;
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(trigPin, LOW); delayMicroseconds(5);
  digitalWrite(trigPin, HIGH); delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  zaman = pulseIn(echoPin, HIGH);
  mesafe = (zaman / 2) / 29.1;
  Serial.print("Uzaklik ");
  Serial.print(mesafe);
  Serial.println(" cm");
  delay(500);

  if (mesafe <= 50)
  {
    analogWrite(motorPin,125);
  }
  else if (mesafe <=30)
  {
    analogWrite(motorPin, 175);
  }
  else if(mesafe <=15)
  {
    analogWrite(motorPin, 255);
  }
  else{
    analogWrite(motorPin,0);
  }
}
