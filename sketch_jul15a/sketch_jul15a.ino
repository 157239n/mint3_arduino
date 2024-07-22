void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  int sum = 0;
  bool receivedAllNumbers = false;

  while (Serial.available()) {
    String input =  Serial.readStringUntil('\n');
    int number = input.toInt();
    sum += number;
    if (number == 9) {
      receivedAllNumbers = true;
      break;
    }
  }
    if (receivedAllNumbers) {
      Serial.println(sum);
      delay(1000);
  }
}
