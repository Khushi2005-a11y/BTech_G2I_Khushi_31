#include <stdio.h>

int main() {
    long long num;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    long long temp = num;

    
    do {
        temp /= 10; // Remove the last digit
        count++;    // Increment the digit counter
    } while (temp != 0);

    printf("Total number of digits in %lld is: %d\n", num, count);

    return 0;
}
