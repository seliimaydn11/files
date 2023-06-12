#define role 7
#define sensor 6
int alkis;
void setup(){

Serial.begin(9600);
Serial.print("ALKİSLA YANAN LAMBA:");
pinMode(role,1);
pinMode(sensor,0);

}

void loop(){
Serial.println(alkis);
delay(500);
alkis= digitalRead(sensor);
if (alkis==HIGH){
  digitalWrite(role,1);
  delay(5000);
  
}
else{
  digitalWrite(role,0);
}






  
}
