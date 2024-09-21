#include <stdio.h>

// Function to compute and print the first n Fibonacci numbers
void printFibonacci(int n) {
    int a = 0, b = 1, next;

    // Print the first two Fibonacci numbers
    printf("%d %d ", a, b);

    // Compute and print the rest of the Fibonacci numbers
    for (int i = 2; i < n; i++) {
        next = a + b; // Calculate the next Fibonacci number
        printf("%d ", next);
        a = b;        // Shift variables for next iteration
        b = next;
    }
    printf("\n"); // New line after printing the sequence
}

int main() {
    int sequence_size = 6; // Print first 6 Fibonacci numbers

    printFibonacci(sequence_size); // Call to compute and print Fibonacci

    return 0;
}

