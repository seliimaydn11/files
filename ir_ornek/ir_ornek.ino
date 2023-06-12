#include <IRremote.h>
int led1=13,led2=12,led3=11,ses=10,IRpin=3;
IRrecv IR0(IRpin);
decode_results results;
#define tus0 16738455
#define tus1 16724175
#define tus2 16718055
#define tus3 16743045
#define tus4 16716015
#define tus5 16726215
void setup() {
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(ses,OUTPUT);
IR0.enableIRIn();
}

void loop() {
  if(IR0.decode(&results)){
    IR0.resume();
    if(results.value==tus1){
      digitalWrite(led1,1);
      digitalWrite(led2,1);
      digitalWrite(led3,1);
    }
    else if(results.value==tus0){
      digitalWrite(led1,0);
      digitalWrite(led2,0);
      digitalWrite(led3,0);
    }
    else if(results.value==tus2){
      digitalWrite(led1,!digitalRead(led1));
      digitalWrite(led2,0);
      digitalWrite(led3,0);
    }
     else if(results.value==tus3){
      digitalWrite(led2,!digitalRead(led2));
      digitalWrite(led1,0);
      digitalWrite(led3,0);
    }
     else if(results.value==tus4){
      digitalWrite(led3,!digitalRead(led3));
      digitalWrite(led2,0);
      digitalWrite(led1,0);
    }
    if(results.value==tus5){
      digitalWrite(ses,!digitalRead(ses));
    }
    delay(100);
  }

}
