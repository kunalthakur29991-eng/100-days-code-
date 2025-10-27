//Q98: Print initials of a name with the surname displayed in full.
 #include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
 {
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    char name[100];
    printf("Enter the full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline if present
    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);
    int lastSpace = -1;

    // Find the position of the last space (before surname)
    for (int i = 0; i < len; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    // Print initials for first and middle names
    for (int i = 0; i < len; i++) {
        if (i == 0) { // First character
            printf("%c.", toupper(name[i]));
        } else if (name[i] == ' ' && i < lastSpace) { // Characters after spaces before last
            if (name[i + 1] != '\0' && name[i + 1] != ' ') {
                printf("%c.", toupper(name[i + 1]));
            }
        }
    }

    // Print the surname in full
    if (lastSpace != -1 && lastSpace + 1 < len) {
        printf(" %s", &name[lastSpace + 1]);
    }

    printf("\n");
    return 0;
}
