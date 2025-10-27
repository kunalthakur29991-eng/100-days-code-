//Q82: Print each character of a string on a new line.
  #include <stdio.h>
  int main()
{
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    char str[100];
    int i = 0;

    scanf("%[^\n]s", str);

    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
