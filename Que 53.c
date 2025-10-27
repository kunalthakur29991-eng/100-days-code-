//Q53: Write a program to print the following pattern:
//*
//***
//*****
//*******
//*********
//*******
//*****
//***
//*
            #include <stdio.h>

int main()
 {
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int i, j;
    int n = 5; // Number of lines in the upper half

    // Upper half of the pattern
    for(i = 1; i <= n; i++) {
        // Print stars: 1, 3, 5, ...
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for(i = n-1; i >= 1; i--) {
        
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    getch ();
    return 0;
}

