void setup() {
  // put your setup code here, to run once:
  pinMode(14, INPUT);
  Serial.begin(9600);
}

bool started = false;
int lastValue = 0;
long buffer[1000];
int ibuf = 0;
long lastTime = 0;

void loop() {
  // put your main code here, to run repeatedly:
  long now = micros();
  int value = digitalRead(14);
  if (!started && value == 0) {
    started = true;
    lastValue = 0;
    lastTime = micros();
  }
  if (started && lastValue != value) {
    buffer[ibuf] = now;
    ibuf++; lastValue = value; lastTime = now;
  }
  if (now - lastTime > 40000) {
    for (int i = 0; i < ibuf; i++) {  
      Serial.print(String(buffer[i]) + "|");
    }
  }

}

