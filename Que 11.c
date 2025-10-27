// Que 11 : Write a program to input an integer and check whether it is even or off using if - else .
   #include <stdio.h>

int main()
 {
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) 
    {
        printf("%d is even\n", num);
    }      
     else 
     {
        printf("%d is odd\n", num);
    }

    return 0;
} 
