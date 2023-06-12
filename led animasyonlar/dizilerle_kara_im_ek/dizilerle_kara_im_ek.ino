int ledler[]={8,9,10,11,12,13};
int i=0;
int j=5;
void setup() {
  for(i=0;i<6;i++){
    pinMode(ledler[i],OUTPUT);
  }
}

void loop() {
  
for(i=0;i<6;i++)
{
digitalWrite(ledler[i],HIGH);
delay(70);
digitalWrite(ledler[i],LOW);
}
for(j=5;j>-1;j--){

 
digitalWrite(ledler[j],HIGH);
delay(70);
digitalWrite(ledler[j],LOW);
  
}
}
