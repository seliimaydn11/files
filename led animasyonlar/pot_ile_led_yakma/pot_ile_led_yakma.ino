int pot =A0;//potansiyometremin pinini aanalog 0 a bağladım
int pot_val=0;//pot_val adında bir değişken oluşturdum bunu potansiyometrenin değerine eşitleyeceğim
int led1=3,led2=4,led3=5,led4=6; //ledleri tanımladım
byte rastgele=0;
void setup() {
  
  Serial.begin(9600); //SERİ PORT AÇILDI

 //----------------------------------PİN GÜÇ GİRİŞ ÇIKIŞLARI AYARLANIYOR
   pinMode(pot,INPUT);
   pinMode(led1,OUTPUT);
   pinMode(led2,OUTPUT);
   pinMode(led3,OUTPUT);
   pinMode(led4,OUTPUT);
   randomSeed(A0);
}

void loop() {
  rastgele=random(0,11);
  pot_val=analogRead(pot); //eşitleme yapıldı
 
  
if (pot_val<=511 )
{
digitalWrite(led1,1);
digitalWrite(led2,0);

 }
else if (pot_val<=1023 )
{
digitalWrite(led1,0);
digitalWrite(led2,1);

}
else{
digitalWrite(led1,0);
digitalWrite(led2,0);

}

 switch(rastgele)
 {
  case 3:
 digitalWrite(led3,1);
 digitalWrite(led4,0);
 break;

 case 9:
 digitalWrite(led4,1);
 digitalWrite(led3,0);
 break;
 
default :
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  break;

  delay(500);
 
 Serial.print("RASTGELE SAYİ:");
 Serial.println(rastgele);
 Serial.print("POT DEGER:");
 Serial.println(pot_val);

 }

}
