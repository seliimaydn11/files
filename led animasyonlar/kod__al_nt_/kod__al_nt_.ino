#define LED1 13

#define LED2 12

#define LED3 11

#define LED4 10

#define buton1 9

#define buton2 8
int i=0 ;

void setup() {

  pinMode(LED1,OUTPUT);

  pinMode(LED2,OUTPUT);

  pinMode(LED3,OUTPUT);

  pinMode(LED4,OUTPUT);

  pinMode(buton1,INPUT_PULLUP);

  pinMode(buton2,INPUT_PULLUP);



}

int t=100;

void loop() {

 

  while(digitalRead(buton1)==0)    
  for(i;i<2;i++)   

  {

    digitalWrite(LED1,1);

    delay(t);

    digitalWrite(LED2,1);

    delay(t);

    digitalWrite(LED3,1);

    delay(t);

    digitalWrite(LED4,1);

    delay(t);

    digitalWrite(LED1,0);

    delay(t);

    digitalWrite(LED2,0);

    delay(t);

    digitalWrite(LED3,0);

    delay(t);

    digitalWrite(LED4,0);

    delay(t);

  }

   

    while(digitalRead(buton2)==0) 
    for(i;i<2;i++)      
  
  {

    digitalWrite(LED4,1);

    delay(t);

    digitalWrite(LED3,1);

    delay(t);

    digitalWrite(LED2,1);

    delay(t);

    digitalWrite(LED1,1);

    delay(t);

    digitalWrite(LED4,0);

    delay(t);

    digitalWrite(LED3,0);

    delay(t);

    digitalWrite(LED2,0);

    delay(t);

    digitalWrite(LED1,0);

    delay(t);

  }

   

}
