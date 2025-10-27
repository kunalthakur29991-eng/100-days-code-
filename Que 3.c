// Que 3 : write a program to calculate the area and perimeter of ractangle given its length and breadth.
 #include <stdio.h>

int main() {
     printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    int length, breadth;
    printf("Enter length and breadth of the rectangle: ");
    scanf("%d %d", &length, &breadth);

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);

    return 0;
}
