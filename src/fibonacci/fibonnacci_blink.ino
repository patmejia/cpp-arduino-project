int ledPin = 13;  // LED pin

// Set up pin 13 as output
void setup() {
  pinMode(ledPin, OUTPUT);
}

// Compute nth Fibonacci number iteratively
int fibonacci(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  
  int prev = 0, current = 1, next;
  for (int i = 2; i <= n; i++) {
    next = prev + current;
    prev = current;
    current = next;
  }
  return current;
}

// Blink LED based on Fibonacci sequence
void blinkFibonacci(int count) {
  for (int i = 0; i < count; i++) {
    int fibValue = fibonacci(i);   // Compute Fibonacci on-the-fly
    digitalWrite(ledPin, HIGH);    // LED ON
    delay(fibValue * 500);         // Delay proportional to Fibonacci
    digitalWrite(ledPin, LOW);     // LED OFF
    delay(1000);                    // Fixed off-time (0.5s)
  }
}

void loop() {
  blinkFibonacci(6);  // Blink first 6 Fibonacci numbers
}
