// Que 50 : Write a program to print the following pattern:
//*****
//****
//***
//**
//*
  #include <stdio.h>

int main()
 {
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int i, j, n = 5;


    for(i = 1; i <= n; i++) {
        
        for(j = 1; j < i; j++) {
            printf(" ");
        }
    
        for(j = i; j <= n; j++) {
            printf("*");
        }
        printf("\n"); 
    }
    getch ();
    return 0;
}

