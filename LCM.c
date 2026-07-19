#include <stdio.h>

int main() {
    int n1, n2, i, gcd, lcm;

    // Take input from the user
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // Loop to find the Greatest Common Divisor (GCD)
    for (i = 1; i <= n1 && i <= n2; ++i) {
        // Check if i is a factor of both integers
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }

    // Calculate LCM using the formula: (n1 * n2) / GCD
    lcm = (n1 * n2) / gcd;

    // Display the result
    printf("The LCM of %d and %d is %d.\n", n1, n2, lcm);

    return 0;
}
