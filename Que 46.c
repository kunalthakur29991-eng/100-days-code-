// Que 46 : Write a program to print the following patterns :
            // *****
            // *****
            // *****
            // *****
            // ***** 
   #include <stdio.h>

int main()
 {
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int i, j;
    int rows = 5, cols = 5; 

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= cols; j++) {
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}
