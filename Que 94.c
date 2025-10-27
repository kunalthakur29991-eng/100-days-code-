//Q94: Find the longest word in a sentence.
 #include <stdio.h>
#include <string.h>

int main() 
{
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    scanf("%[^\n]s", str);

    longest[0] = '\0'; 

    while (1) 
    {
        j = 0;


        while (str[i] != ' ' && str[i] != '\0') 
        {
            word[j++] = str[i++];
        }
        word[j] = '\0';

        if (j > maxLen) 
        {
            maxLen = j;
            strcpy(longest, word);
        }

        if (str[i] == '\0')
         {
            break; 
         }
        i++; 
    }

    printf("%s", longest);

    return 0;
}
