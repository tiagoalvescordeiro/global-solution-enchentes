#define SENSOR_PIN 34  // GPIO34

void setup() {
  Serial.begin(115200);
  Serial.println("Monitorando umidade do solo...");
}

void loop() {
  int umidade = analogRead(SENSOR_PIN);
  Serial.print("Umidade do solo: ");
  Serial.println(umidade);
  delay(1000);
}
