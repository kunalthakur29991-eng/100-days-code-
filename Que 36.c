// Que 36 : Write a program to find the HCF(GCD) of two numbers .
  #include <stdio.h>

int main()
 {
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int a, b, temp, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;

    // Euclid's algorithm
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    hcf = x;

    printf("HCF of %d and %d is %d\n", a, b, hcf);

    return 0;
}


