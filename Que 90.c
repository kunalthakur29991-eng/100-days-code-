//Q90: Toggle case of each character in a string.
   #include <stdio.h>

int main() 
{
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    char str[100];
    int i = 0;

    scanf("%[^\n]s", str); 

    while (str[i] != '\0')
     {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 32; 
        } else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32; 
        }
        i++;
     }

    printf("%s", str);

    return 0;
}
