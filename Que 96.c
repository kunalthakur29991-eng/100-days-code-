//Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
void reverseWord(char *start, char *end)
 {
    char temp;
    while (start < end)
     {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
     }
}

int main() 
{
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    char *wordStart = str;
    char *ptr = str;

    while (*ptr)
     {
        if (*ptr == ' ' || *ptr == '\0')
         {
            reverseWord(wordStart, ptr - 1);
            wordStart = ptr + 1;
         }
        ptr++;
     }
    
    reverseWord(wordStart, ptr - 1);

    printf("Output: %s\n", str);
    return 0;
}
