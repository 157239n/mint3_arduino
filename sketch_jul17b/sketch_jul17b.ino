void setup() {
  // put your setup code here, to run once:
  Serial.begin(38400);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    String msg = Serial.readStringUntil('\n');
    Serial.println("0" + msg +"1");
  }
}
