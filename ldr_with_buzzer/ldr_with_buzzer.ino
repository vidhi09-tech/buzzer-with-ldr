int buzzer = 8;
int ldr = A5;
int value;
int sensorValue;
void setup(){
  pinMode(buzzer,OUTPUT);
  pinMode(ldr,INPUT);
  Serial.begin(9600);
}
void loop(){
  sensorValue = analogRead(ldr);
  value = 3*(sensorValue)+500;
  tone(buzzer,value);
  delay(10);
  Serial.print("sensor value");
  Serial.println(sensorValue);
  Serial.print("value stored in buzzer");
  Serial.println(value);
  
}
  
