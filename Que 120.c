//Q120: Write a program to take a string input. Change it to sentence case.
 #include <stdio.h>
#include <ctype.h>

int main()
 {
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    char str[200];
    
    fgets(str, sizeof(str), stdin);

    int i = 0;

    if (isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    for (i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);  
        }
    }

    printf("%s", str);

    return 0;
}
