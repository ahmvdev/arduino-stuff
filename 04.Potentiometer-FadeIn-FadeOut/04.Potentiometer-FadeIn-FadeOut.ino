int ledPin = 10;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A1);
  float brightness = sensorValue/4;
  analogWrite(ledPin, brightness);
}
