
int  potdeger=A0;

void setup() {
  Serial.begin(9600);
  
}
void loop() 
{
 potdeger=analogRead(A0);
  Serial.println(potdeger);
  delay(100);
}
