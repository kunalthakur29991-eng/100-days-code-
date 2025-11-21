//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
 #include <stdio.h>
#include <ctype.h>

int main()
 {
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    FILE *fp;
    char filename[100];
    int ch;
    int vowels = 0, consonants = 0;

    // Take filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open the file
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    // Read character by character
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);

        if (isalpha(ch)) {   // Only letters allowed
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
