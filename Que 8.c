// Que 8 : Write a program to find and display the sum of the first n natural numbers .
  #include <stdio.h>

int main() 
{
     printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("Sum = %d\n", sum);

    return 0;
}
