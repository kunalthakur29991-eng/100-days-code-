// Que 28 : Write a program to print the product of even numbers from 1 to n . 
         #include <stdio.h>

int main()
 {
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int n, i;
    long long product = 1;
    int found = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product *= i;
        found = 1;
    }

    if (found)
        printf("Product = %lld\n", product);
    else
        printf("No even numbers in the given range.\n");

    return 0;
}
