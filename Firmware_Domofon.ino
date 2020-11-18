#define IN_PIN 4
#define SAY_PIN 0
#define OPN_PIN 3

void setup() {
  pinMode(IN_PIN, INPUT);
  pinMode(SAY_PIN, OUTPUT);
  pinMode(OPN_PIN, OUTPUT);
}

void loop() {
  if (digitalRead(IN_PIN)) {
    digitalWrite(SAY_PIN, HIGH);
    delay(1000);
    digitalWrite(OPN_PIN, HIGH);
    delay(100);
    digitalWrite(OPN_PIN, LOW);
    delay(1000);
    digitalWrite(SAY_PIN, LOW);
    
    while (digitalRead(IN_PIN));
    delay(5000);
  }
}
