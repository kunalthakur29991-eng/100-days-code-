// Que 4 : Write a program to calculate the area and circumference of a circle given its radius .
  #include <stdio.h>
#define PI 3.14

int main() {
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = PI * radius * radius;
    float circumference = 2 * PI * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
