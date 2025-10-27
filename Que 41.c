// Que 41 : Write a program to swap the first and last digit of a number .
  #include <stdio.h>
#include <math.h>

int main() 
{
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int num, first, last, digits, swapped, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10; // Last digit

    // Count the number of digits
    digits = 0;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    first = temp / pow(10, digits - 1); // First digit

    // If number has only 1 digit, swapping does nothing
    if (digits == 1) {
        swapped = num;
    } else {
        swapped = num - first * pow(10, digits - 1) - last + last * pow(10, digits - 1) + first;
    }

    printf("Number after swapping first and last digits: %d\n", swapped);

    return 0;
}
