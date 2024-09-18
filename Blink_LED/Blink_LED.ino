// Filename: Blink_LED
/*
 * This code blinks an external LED connected to pin 13.
 */

#define LED_PIN 13        // Define LED pin
const int delay_time = 1000; // Constant for delay time

void setup() {
    pinMode(LED_PIN, OUTPUT); // Set pin 13 as output
}

void loop() {
    digitalWrite(LED_PIN, HIGH);  // Turn the LED on
    delay(delay_time);            // Wait for 1 second
    digitalWrite(LED_PIN, LOW);   // Turn the LED off
    delay(delay_time);            // Wait for 1 second
}