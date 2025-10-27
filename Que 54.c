//Q54: Write a program to print the following pattern:

   //*
  //***
 //*****
//*******
 //*****
  //***
   //*
   #include <stdio.h>

int main()
 {
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int i, j;
    int n = 4; // Number of lines in the upper half including the middle

    // Upper half including middle
    for(i = 1; i <= n; i++) {
        // Print spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for(i = n-1; i >= 1; i--) {
        // Print spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    getch ();
    return 0;
}
