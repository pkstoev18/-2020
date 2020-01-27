 
int ValHigh = 210;
void setup(){
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(A0,INPUT);
}
void loop(){
  Serial.print(analogRead(A0));
  Serial.print('\n');
  delay(500);
  if(analogRead(A0) > ValHigh){
    digitalWrite(8,HIGH);
  }
  else{
    digitalWrite(8,LOW);
  }
}
