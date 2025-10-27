// Que 23 : Write a program to calculate libraray fine based on late days as follow :
        // First 5 days late : 2 rupee/day
        // Next 5 days late : 4 rupee/day
        // Next 20 days late : 6 rupee/day
        // more than 30 days : membership cancelled .
   #include <stdio.h>

int main()
 {
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int days;
    int fine = 0;

    printf("Enter number of days late: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No Fine\n");
    }
    else if (days <= 5) {
        fine = days * 2;
        printf("Fine ?%d\n", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Fine ?%d\n", fine);
    }
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Fine ?%d\n", fine);
    }
    else {
        printf("Membership Cancelled\n");
    }

    return 0;
}
         
