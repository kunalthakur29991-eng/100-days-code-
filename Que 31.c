// Que 31 : Write a program to take a number as input and print its equivalent binary representation .
        #include <stdio.h>

int main()
 {
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int num, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == 0) {
        printf("0\n");
        return 0;
    }

    while(num > 0) {
        binary[i] = num % 2; 
        num = num / 2;
        i++;
    }

    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");
    return 0;
}
