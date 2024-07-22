const int soundSensorPin = A0;

void setup() {
  Serial.begin(115200); // Khởi động 
  pinMode(soundSensorPin, INPUT);
}

void loop() {
  int soundValue = analogRead(soundSensorPin); // Đọc giá trị từ cảm biến âm thanh
  Serial.println(soundValue); // giá trị trên Serial Monitor
  delay(100); // Trễ 100ms để không làm quá tải 
}
