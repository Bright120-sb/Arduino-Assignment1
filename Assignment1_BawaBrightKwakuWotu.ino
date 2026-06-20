int startValue = 5;
int ledPin = 13;
void flashLED(int times) {
  digitalWrite(ledPin, HIGH);
  delay(200);
  digitalWrite(ledPin, LOW);
  delay(200);

}

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);

  Serial.println("===== Smart Countdown Starting =====");

  int count = 5;
  while (count > 0) {
    Serial.print("Count: ");
    Serial.println(count);

    flashLED(count);

    delay(1000);
    count = count - 1;

  }

  Serial.println ("===== Countdown Complete =====");

}

void loop() {}