//Q87: Count spaces, digits, and special characters in a string.
   #include <stdio.h>
    int main() 
{
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    char str[100];
    int spaces = 0, digits = 0, special = 0;
    int i = 0;

    scanf("%[^\n]s", str); 

    while (str[i] != '\0')
     {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
            special++; 
        i++;
     }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);

    return 0;
}
