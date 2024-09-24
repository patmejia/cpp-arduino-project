const int ledPin = 13;   // Pin for built-in LED

void setup() {
  pinMode(ledPin, OUTPUT);   // Set LED pin as output
  Serial.begin(9600);        // Start serial communication
}

void loop() {
  if (Serial.available()) {   // Check for user input
    switch (Serial.read()) {  // Read and process input
      case '1': 
        digitalWrite(ledPin, HIGH);  // Turn LED on
        break;
      case '0': 
        digitalWrite(ledPin, LOW);   // Turn LED off
        break;
    }
  }
}
