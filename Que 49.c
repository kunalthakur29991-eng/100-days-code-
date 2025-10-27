// Que49 : Write a program to print the following pattern:
//5
//45
//345
//2345
//12345

 #include <stdio.h>

int main()
 {
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int i, j;

    
    for(i = 5; i >= 1; i--) {
    
        for(j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); 
    }
    getch ();
    return 0;
}
