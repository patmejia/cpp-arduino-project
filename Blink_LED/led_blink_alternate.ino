const int ledPin = 13;        // Pin for the built-in LED
const int fastDelay = 500;    // 0.5 second for fast blinking (on + off)
const int slowDelay = 2000;   // 2 seconds for slow blinking (on + off)
const int blinkCount = 5;     // Number of blinks per cycle
const int setSeparation = 1000;  // Delay between fast and slow sets (1 second)

void setup() {
  pinMode(ledPin, OUTPUT);    // Set pin 13 as output
}

// Blink the LED 'count' times with 'delayTime' milliseconds on/off.
void blinkLED(int delayTime, int count) {
  for (int i = 0; i < count; i++) {
    digitalWrite(ledPin, HIGH);   // Turn LED on
    delay(delayTime / 2);         // Wait half the blink period
    digitalWrite(ledPin, LOW);    // Turn LED off
    delay(delayTime / 2);         // Wait the other half
  }
}

void loop() {
  blinkLED(fastDelay, blinkCount);  // Blink 5 times quickly
  delay(setSeparation);             // Short delay between fast and slow blinks
  blinkLED(slowDelay, blinkCount);  // Blink 5 times slowly
  delay(setSeparation);             // Short delay before repeating
}
