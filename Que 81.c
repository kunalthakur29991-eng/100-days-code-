//Q81: Count characters in a string without using built-in length functions.
   #include <stdio.h>
    int main()
 {
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    char str[100];
    int count = 0;

    scanf("%[^\n]s", str); 

    while (str[count] != '\0')
     {
        count++;
     }

    printf("%d", count);

    return 0;
 } 
