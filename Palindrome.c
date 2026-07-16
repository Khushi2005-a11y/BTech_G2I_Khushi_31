#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, original;

    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Store the original number as 'n' will change in the loop
    original = n;

    // Logic to reverse the integer
    while (n != 0) {
        remainder = n % 10;                  // Extract the last digit
        reversed = reversed * 10 + remainder; // Append digit to reversed number
        n /= 10;                             // Remove the last digit from n
    }

    // Check if the original number and reversed number are equal
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
