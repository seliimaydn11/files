#define led1 12
#define led2 11
#define led3 10
#define led4 9
#define led5 8
#define buton 13
#define buton2 7
int i= 0;
int t= 50;
void setup() {
  Serial.begin(9600);
  Serial.print("KARA ŞİMŞEK DÖNGÜSÜ BUTONLU");
    pinMode(led1,OUTPUT);
    pinMode(led2,OUTPUT);
    pinMode(led3,OUTPUT);
    pinMode(led4,OUTPUT),
    pinMode(buton,INPUT_PULLUP);

}

void loop() {
  
 if(digitalRead(buton)==LOW){

 for(i;i<5;i++){
  digitalWrite(led1,1);delay(t);
  digitalWrite(led2,1);delay(t);
  digitalWrite(led3,1);delay(t);
  digitalWrite(led4,1);delay(t);

  digitalWrite(led1,0);delay(t);
  digitalWrite(led2,0);delay(t);
  digitalWrite(led3,0);delay(t);
  digitalWrite(led4,0);delay(t);
 }

}
}
