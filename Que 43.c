// Que 43 : Write a program to check if a number is a strong number .
        #include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
     {
        fact *= i;
    }
    return fact;
}

int main()
 {
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        digit = temp % 10;         
        sum += factorial(digit);   
        temp = temp / 10;          
    }

    if (sum == num) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
