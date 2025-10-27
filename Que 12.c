// Que 12 : Write a program to input an integer and check whether it is positive , negative or zero using nested if - else .
   #include <stdio.h>

int main() 
 {
      printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

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
