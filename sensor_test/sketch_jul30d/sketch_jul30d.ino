int sensor;
void setup() {
  pinMode(9,OUTPUT);
  Serial.begin(9600);

}

void loop() {
 for(int i=0;i<=255;i++){
  analogWrite(9,i);
  delay(8);
 }
 for(int i=255;i>=0;i--){
  analogWrite(9,i);
  delay(8);
 }
}
