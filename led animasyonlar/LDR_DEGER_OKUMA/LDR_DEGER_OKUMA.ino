#define Ldr A0 
void setup()
{
Serial.begin(9600);
} 
void loop()
{
int Ldr_deger = analogRead(Ldr);
Serial.print("Analog Deger = "); 
Serial.println(Ldr_deger);
delay(250); 
}
