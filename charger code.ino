const int inputPin = A0;    // Analog input pin to sense voltage
const int outputPin = 3;    // Output pin to generate logic high
bool inputConditionMet = false;
unsigned long startTime = 0;

void setup() {
  pinMode(outputPin, OUTPUT);       // Set output pin as output
  digitalWrite(outputPin, HIGH);     // Initialize output pin to logic low
}

void loop() {
  int analogValue = analogRead(inputPin);  // Read analog voltage value
  float voltage = analogValue * (5.0 / 1023.0);  // Convert analog value to voltage (assuming 5V reference)
  
  if (voltage < 0.2) {
    if (!inputConditionMet) {
      startTime = millis();  // Store the start time if input condition is met for the first time
      inputConditionMet = true;
    }
    if (millis() - startTime >= 3000) {
      digitalWrite(outputPin, LOW);  // to Set output pin to logic high more time change 3000 to 30000
    }
  } else {
    inputConditionMet = false;  // Reset input condition if voltage is above threshold
    digitalWrite(outputPin, HIGH);   // Set output pin to logic low
  }
  
  delay(100);  // Delay for a short period before reading analog voltage again
}
