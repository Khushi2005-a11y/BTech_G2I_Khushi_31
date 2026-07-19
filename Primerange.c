#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    // Ask user for the minimum and maximum limits
    printf("Enter the starting and ending range: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Loop through each number in the range
    for (i = start; i <= end; i++) {
        
        // 0 and 1 are not prime numbers
        if (i <= 1) {
            continue;
        }

        isPrime = 1; // Assume current number is prime

        // Check if 'i' is divisible by any number from 2 up to i/2
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // Number is composite
                break;       // Exit inner loop early
            }
        }

        // If isPrime remains 1, the number is prime
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}
