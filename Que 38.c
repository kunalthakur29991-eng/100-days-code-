// Que 38 : Write a program to find the sum of digits of a number . 
#include <stdio.h>

int main()
 {
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;  // Extract last digit
        sum += digit;      // Add to sum
        num = num / 10;    // Remove last digit
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
