// Pin Definitions
const int gasSensorPin = A0;    // Analog pin for MQ sensor
const int buzzerPin    = 8;     // Digital pin for buzzer
const int ledPin       = 9;     // Digital pin for LED

// Threshold for gas detection (adjust this based on your sensor and testing)
int gasThreshold = 300;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int gasValue = analogRead(gasSensorPin);
  Serial.print("Gas Sensor Value: ");
  Serial.println(gasValue);

  if (gasValue > gasThreshold) {
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}
