
int ledPin = 10;  

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  for(int fadeVal=5; fadeVal<=255; fadeVal +=5){
    analogWrite(ledPin, fadeVal);
    delay(50);
  }
  for(int fadeVal=255; fadeVal>=0; fadeVal -=5){
    analogWrite(ledPin, fadeVal);
    delay(50);
  }
}
