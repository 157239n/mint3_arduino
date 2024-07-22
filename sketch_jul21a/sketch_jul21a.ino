void setup() {
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  Serial.println("alive");
  digitalWrite(5,HIGH);
  //delayMicroseconds(1);
  digitalWrite(5,LOW);
  //delayMicroseconds(1);

  digitalWrite(5,HIGH);
  //delayMicroseconds(1);
  digitalWrite(5,LOW);
  //delayMicroseconds(1);
  // put your main code here, to run repeatedly:
}
