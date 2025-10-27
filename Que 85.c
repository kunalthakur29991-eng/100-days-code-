//Q85: Reverse a string.
 #include <stdio.h>
  int main()
{
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");         
    char str[100];
    int length = 0, i;

    scanf("%[^\n]s", str); 

    while (str[length] != '\0')
     {
        length++;
     }

    for (i = length - 1; i >= 0; i--)
     {
        printf("%c", str[i]);
     }

    return 0;
}
