void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i<=9; i++){
    Serial.println(i);
    delay(100);
  }
  long startTime = millis();
  while (millis() - startTime < 1000) {
  
    if (Serial.available()){
      String result = Serial.readStringUntil('\n');
      Serial.println(result);
      break;
    }
  }
  delay(5000);
}
