// Que 33 : Write a program to check if a number is an armstrong number .
         #include <stdio.h>
#include <math.h>

int main() 
{
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int num, original, digit, sum = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count the number of digits
    int temp = num;
    while (temp > 0) {
        temp = temp / 10;
        n++;
    }

    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, n);  // Raise digit to the power of n and add
        temp = temp / 10;
    }

    if (sum == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}
