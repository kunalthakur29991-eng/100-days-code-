// Que 37 : Write a program to find the LCM of two numbers .
 #include <stdio.h>

int main()
 {
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int a, b, hcf, lcm, x, y, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Find HCF using Euclid's algorithm
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    hcf = x;

    // Calculate LCM
    lcm = (a * b) / hcf;

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}
