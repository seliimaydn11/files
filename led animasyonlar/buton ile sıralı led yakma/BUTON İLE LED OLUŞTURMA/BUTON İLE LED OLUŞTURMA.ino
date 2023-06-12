 int led1 =3;
 int led2 =4;
 int led3 =5;
 int led4 =6;
 int buton=2;
 int sayac=0;
 int i=0;
void setup(){

pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(buton,INPUT_PULLUP);  
Serial.begin(9600);

}
void loop(){
  if(digitalRead(buton)==LOW)
  {
  sayac=sayac+1;
  }
 if(sayac==1){
  digitalWrite(led1,1);
  digitalWrite(led4,0);
  
 }
 else if(sayac==2){
  digitalWrite(led1,0);
  digitalWrite(led2,1);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  
 }
 else if(sayac==3){
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,1);
  digitalWrite(led4,0);
 }
 else if(sayac==4){
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,1);
 }
 if(sayac==5){
  
    sayac=0;
  
 }
 delay(200);{
 Serial.println(sayac);
 while(digitalRead(buton)==HIGH);
 }
}
