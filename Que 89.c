//Q89: Count frequency of a given character in a string.
 #include <stdio.h>
  int main() 
  {
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    char str[100], ch;
    int i = 0, count = 0;

    scanf("%[^\n]s", str);
    getchar(); 

    scanf("%c", &ch);

    while (str[i] != '\0')
     {
        if (str[i] == ch)
            count++;
        i++;
     }

    printf("%d", count);

    return 0;
  }
