// Que 13 : Write a program to input a year and check whether it is a leap year or not using conditional statements .
   #include <stdio.h>

int main()
 {
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check positive, negative, or zero
    if (num > 0) {
        printf("Positive\n");
    } else {
        if (num < 0) {
            printf("Negative\n");
        } else {
            printf("Zero\n");
        }
    }

    return 0;
}
