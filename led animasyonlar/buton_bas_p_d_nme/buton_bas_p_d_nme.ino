int i=0;
int t=50;


void setup(){
pinMode(13,1);
pinMode(12,1);
pinMode(11,1);
pinMode(10,1);
pinMode(9,INPUT_PULLUP);
  
}
void loop(){
int i=0;
int t=50;


void setup(){
pinMode(13,1);
pinMode(12,1);
pinMode(11,1);
pinMode(10,1);
pinMode(9,INPUT_PULLUP);
pinMode(8,INPUT_PULLUP);

}



  void loop(){

  
  if (digitalRead(9)=0)
  {
  
    digitalWrite(13,1); delay(t);
    digitalWrite(12,1); delay(t);
    digitalWrite(11,1); delay(t);
    digitalWrite(10,1); delay(t);
  }
  
  else 
  {
    digitalWrite(13,0); delay(t);
    digitalWrite(12,0); delay(t);
    digitalWrite(11,0); delay(t);
    digitalWrite(10,0); delay(t);
  }

if (digitalRead(8)=0)
{
  digitalWrite(10,1); delay(t);
    digitalWrite(11,1); delay(t);
    digitalWrite(12,1); delay(t);
    digitalWrite(1,,1); delay(t);
}
    else 
  {
    digitalWrite(13,0); delay(t);
    digitalWrite(12,0); delay(t);
    digitalWrite(11,0); delay(t);
    digitalWrite(10,0); delay(t);
  }
}



    


  
