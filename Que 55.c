//Q55: Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>

int main() 
{
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int n, i, j, isPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are: ", n);

    for(i = 2; i <= n; i++) {
        isPrime = 1; 

        
        for(j = 2; j*j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0; 
                break;
            }
        }

        if(isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
