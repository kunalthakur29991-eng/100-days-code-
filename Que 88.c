//Q88: Replace spaces with hyphens in a string.
 #include <stdio.h>
  int main() 
  {
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    char str[100];
    int i = 0;
    scanf("%[^\n]s", str); 

    while (str[i] != '\0') 
    {
        if (str[i] == ' ')
         {
            str[i] = '-';
         }
        i++;
    }

    printf("%s", str);

    return 0;
}
