byte sayi=0;
const int led1=3,led2=4,led3=5, led4=6;
const int buton=2 ;
void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(2,INPUT_PULLUP);
  
}

void loop() {
if (digitalRead(buton)==LOW)  {

sayi=random(1,10);
Serial.println(sayi);


switch(sayi)  {
case 2:
digitalWrite(led4,0);
digitalWrite(led1,1);
break;
case 3:
digitalWrite(led1,0);
digitalWrite(led2,1);
break;
case 4:
digitalWrite(led2,0);
digitalWrite(led3,1);
break;
case 5:
digitalWrite(led3,0);
digitalWrite(led4,1);
break;
default:
digitalWrite(led1,0);
digitalWrite(led2,0);
digitalWrite(led3,0);
digitalWrite(led4,0);
break;
      }
delay(500);
   }
}
