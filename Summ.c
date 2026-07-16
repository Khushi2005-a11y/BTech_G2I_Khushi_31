#include <stdio.h>
#include <stdlib.h> 

int main() {
    int num, originalNum, remainder, sum = 0;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    originalNum = num;

    
    num = abs(num);

    
    while (num > 0) {
        remainder = num % 10;  
        sum += remainder;      
        num = num / 10;        
    }

    
    printf("The sum of the digits of %d is: %d\n", originalNum, sum);

    return 0;
}
