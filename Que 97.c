//Q97: Print the initials of a name. 
  #include <stdio.h>
  #include <string.h>
  #include <ctype.h>
  int main()
 {  
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    char name[100];
    printf("Enter the name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);

    for (int i = 0; i < len; i++) 
    {
        if (i == 0 && name[i] != ' ') 
        {
            printf("%c.", toupper(name[i]));
        }
        else if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ') 
        {
            printf("%c.", toupper(name[i + 1]));
        }
    }
    printf("\n");
    return 0;
}
