#include <stdio.h>

int main() {
    int num, remainder, reversed_num = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop to reverse the digits of the number
    while (num != 0) {
        remainder = num % 10;                  // Extract the last digit
        reversed_num = reversed_num * 10 + remainder; // Append digit to reversed number
        num /= 10;                             // Remove the last digit from original number
    }

    // Print the final reversed number
    printf("Reversed number: %d\n", reversed_num);

    return 0;
}
