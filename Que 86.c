//Q86: Check if a string is a palindrome.
  #include <stdio.h>
   int main() 
{
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    char str[100];
    int length = 0, i, flag = 0;

    scanf("%[^\n]s", str); 

    while (str[length] != '\0') 
    {
        length++;
    }

    for (i = 0; i < length / 2; i++)
     {
        if (str[i] != str[length - i - 1]) 
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
