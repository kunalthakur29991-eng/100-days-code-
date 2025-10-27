//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
 int main() 
 {
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    char date[20];
    char day[3], month[3], year[5];
    
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    // Split the date into day, month, year
    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date + 3, 2);
    month[2] = '\0';

    strncpy(year, date + 6, 4);
    year[4] = '\0';

    // Convert month number to month abbreviation
    char monthStr[4];
    if (strcmp(month, "01") == 0) strcpy(monthStr, "Jan");
    else if (strcmp(month, "02") == 0) strcpy(monthStr, "Feb");
    else if (strcmp(month, "03") == 0) strcpy(monthStr, "Mar");
    else if (strcmp(month, "04") == 0) strcpy(monthStr, "Apr");
    else if (strcmp(month, "05") == 0) strcpy(monthStr, "May");
    else if (strcmp(month, "06") == 0) strcpy(monthStr, "Jun");
    else if (strcmp(month, "07") == 0) strcpy(monthStr, "Jul");
    else if (strcmp(month, "08") == 0) strcpy(monthStr, "Aug");
    else if (strcmp(month, "09") == 0) strcpy(monthStr, "Sep");
    else if (strcmp(month, "10") == 0) strcpy(monthStr, "Oct");
    else if (strcmp(month, "11") == 0) strcpy(monthStr, "Nov");
    else if (strcmp(month, "12") == 0) strcpy(monthStr, "Dec");
    else strcpy(monthStr, "Invalid");

    // Print in new format
    printf("%s-%s-%s\n", day, monthStr, year);

    return 0;
}
