// Que 51 : Write a program to print the following pattern:
    //5
   //45
  //345
 //2345
//12345
#include <stdio.h>

int main()
 {
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int i, j, n = 5;

    for(i = 1; i <= n; i++) {
        
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        
        for(j = n - i + 1; j <= n; j++) {
            printf("%d", j);
        }

        printf("\n");
    }
    getch ();
    return 0;
}
