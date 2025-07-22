void setup() {
  pinMode(13, OUTPUT);   // LED pin
  pinMode(2, INPUT);     // Button pin
}

void loop() {
  if (digitalRead(2) == LOW) {
    digitalWrite(13, LOW);  
  } else {
    digitalWrite(13, HIGH);   
  }
}
