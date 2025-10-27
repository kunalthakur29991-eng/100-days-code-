// Que 27 : Write a program to print the sum od first n odd numbers .
        #include <stdio.h>

int main()
 {
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1);  // formula for ith odd number
    }

    printf("Sum = %d\n", sum);

    return 0;
}
