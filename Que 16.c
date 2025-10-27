// Que 16 : Write a program to input three numbers and find largest among them using if - else .
  #include <stdio.h>

int main()
 {
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("Largest is %d\n", a);
    else if (b >= a && b >= c)
        printf("Largest is %d\n", b);
    else
        printf("Largest is %d\n", c);

    return 0;
}
