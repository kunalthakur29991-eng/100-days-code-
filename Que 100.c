//Q100: Print all sub-strings of a string.
 #include <stdio.h>
 #include <string.h>
 int main()
  { 
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    printf("Substrings: ");
    for (int i = 0; i < len; i++) 
    {         
        for (int j = i; j < len; j++)
         {   
            for (int k = i; k <= j; k++) 
            {  
                printf("%c", str[k]);
            }
            printf(","); 
        }
    }
    printf("\n");

    return 0;
}
