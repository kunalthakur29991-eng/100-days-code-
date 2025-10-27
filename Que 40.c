// Que 40 : Write a prograam to find the 1's complement of a binary number and print it . 
#include <stdio.h>
#include <string.h>

int main()
 {
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    printf("1's complement: ");

    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0')
            printf("1");
        else if (binary[i] == '1')
            printf("0");
        else {
            printf("\nInvalid binary number\n");
            return 1;
        }
    }

    printf("\n");
    return 0;
}
