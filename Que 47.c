// Que 47 : write a program to print the following pattern : 
          // * 
          // **
          // ***
          // ****
          // ***** 
          #include <stdio.h>

int main() 
{
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int i, j;
    int rows = 5; // Number of rows

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to next row
    }
    getch ();
    return 0;
}
