#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, temp, remainder;
    long long product = 1;

    // Get input from the user
    printf("Enter any integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Store the original number for display later
    temp = num;

    // Handle negative numbers by taking the absolute value
    num = abs(num);

    // Handle the specific case where the input is 0
    if (num == 0) {
        product = 0;
    } else {
        // Loop to extract and multiply digits
        while (num > 0) {
            remainder = num % 10;       // Extract the last digit
            product = product * remainder; // Multiply to the total product
            num = num / 10;             // Remove the last digit
        }
    }

    // Print the final result
    printf("The product of the digits of %d is: %lld\n", temp, product);

    return 0;
}
