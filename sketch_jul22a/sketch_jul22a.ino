const int soundSensorDigitalPin = 14; // Chọn chân digital bạn muốn sử dụng

void setup() {
  Serial.begin(115200);
  pinMode(soundSensorDigitalPin, INPUT);
}

void loop() {
  int soundState = digitalRead(soundSensorDigitalPin); // Đọc giá trị digital từ cảm biến
  if (soundState == HIGH) {
    Serial.println("Sound detected!");
  } else {
    Serial.println("No sound.");
  }
  delay(100);
}
