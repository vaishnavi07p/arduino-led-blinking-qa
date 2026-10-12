
/*
  Project: Arduino LED Blinking
  Board: Arduino Uno
  Purpose: Blink the built-in LED every one second.
*/

const int LED_PIN = LED_BUILTIN;
const unsigned long BLINK_INTERVAL = 1000;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(BLINK_INTERVAL);

  digitalWrite(LED_PIN, LOW);
  delay(BLINK_INTERVAL);
}
