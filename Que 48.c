// Que 48 : Write a program to print the following pattern : 
           // 1
           // 12
           // 123 
           // 1234 
           // 12345 
    #include <stdio.h>

int main()
 {
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int i, j;
    

    for(i = 1; i <= 5; i++) {
    
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n"); 
    }
    getch ();
    return 0;
}
