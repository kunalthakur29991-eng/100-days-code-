//Q91: Remove all vowels from a string.
 #include <stdio.h>
  int main() 
{
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    char str[100];
    int i = 0, j = 0;

    scanf("%[^\n]s", str); 

    while (str[i] != '\0')
     {
        char ch = str[i];
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) 
              {
            str[j++] = str[i]; 
              }
        i++;
     }
    str[j] = '\0'; 

    printf("%s", str);

    return 0;
}
