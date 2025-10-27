// Que2 : Write a program to input two numbers and display there sum,difference,product, and quotient.
 #include <stdio.h>

int main() {
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);
    if (b != 0)
        printf("Quotient = %d\n", a / b);
    else
        printf("Division by zero is not allowed.\n");

    return 0;
}
