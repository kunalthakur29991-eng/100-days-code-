//Q52: Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*
#include <stdio.h>

int main()
 {
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int groups[] = {3, 5, 3, 1};  
    int i, j, totalGroups = 4;

    for(i = 0; i < totalGroups; i++) {
        for(j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
        printf("\n"); 
    }
    getch ();
    return 0;
}


