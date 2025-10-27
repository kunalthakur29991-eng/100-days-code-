// Que 19 : Write a program to classify a triangle as Equilateral , isoscales , or scalene based on its side length . 
   #include <stdio.h>

int main() 
{
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    float a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            printf("Equilateral\n");
        else if (a == b || b == c || a == c)
            printf("Isosceles\n");
        else
            printf("Scalene\n");
    } else {
        printf("Not a valid triangle\n");
    }

    return 0;
}
