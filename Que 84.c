//Q84: Convert a lowercase string to uppercase without using built-in functions.
  #include <stdio.h>
  int main()
 {
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    char str[100];
    int i = 0;

    scanf("%[^\n]s", str); 

    
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
        }
        i++;
    }

    
    printf("%s", str);

    return 0;
}
