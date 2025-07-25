
const int echoPin = 5;
const int trigPin =4;
const int lightPin =10;

void setup() {
  Serial.begin(9600);
}

void loop() {

  long duration, inches, cm;

  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);


  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH, 30000);

  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);

  pinMode(lightPin, OUTPUT);
  if(inches<10 && inches>1){
    digitalWrite(lightPin, HIGH);

  }
  else{
    digitalWrite(lightPin, LOW);
  }

  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();

  delay(100);
}

long microsecondsToInches(long microseconds) {
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}