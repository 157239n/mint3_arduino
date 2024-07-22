#include "HX711.h"

// HX711 circuit wiring
const int LOADCELL_DOUT_PIN = 4; // D2 on NodeMCU
const int LOADCELL_SCK_PIN = 0;  // D3 on NodeMCU

HX711 scale;

void setup() {
  Serial.begin(115200);
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);

  Serial.println("Initializing the scale");

  // Optional: Set the scale to zero
  Serial.println("Tare... remove any weights from the scale.");
  delay(5000);
  scale.tare(); // Reset the scale to 0

  Serial.println("Scale initialized.");
}

void loop() {
  if (scale.is_ready()) {
    long reading = scale.read();
    Serial.print("Raw reading: ");
    Serial.println(reading);

    float weight = reading / -650000.0; // Example calibration
    Serial.print("Weight: ");
    Serial.print(weight);
    Serial.println(" kg");
  } else {
    Serial.println("HX711 not found.");
  }

  delay(1000);
}