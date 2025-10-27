//Q92: Find the first repeating lowercase alphabet in a string.
 #include <stdio.h>
  int main() 
{
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    char str[100];
    int count[26] = {0}; 
    int i;

    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++)
     {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z')
         {
            count[ch - 'a']++; 
            if (count[ch - 'a'] == 2)
             { 
                printf("%c", ch);
                return 0;
             }
         }
     }

    printf("No repeating character");

    return 0;
}
