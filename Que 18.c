// Que 18 : Write a program that accepts a percentage (0-100) and assigns a grade based on following criteria :
       90 - 100 : grade A 
       80 - 89  : grade B 
       70 - 79  : grade C
       60 - 69  : grade D
       below 60 : grade F .
       
       
       #include <stdio.h>
       int main() 
{  
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");   
    int percent;
    printf("Enter percentage (0-100): ");
    scanf("%d", &percent);
    if (percent >= 90 && percent <= 100)
        printf("Grade A\n");
    else if (percent >= 80)
        printf("Grade B\n");
    else if (percent >= 70)
        printf("Grade C\n");
    else if (percent >= 60)
        printf("Grade D\n");
    else if (percent >= 0)
        printf("Grade F\n");
    else
        printf("Invalid percentage!\n");

    return 0;
}
