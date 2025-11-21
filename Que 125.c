//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
 #include <stdio.h>

int main()
 {
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    FILE *fp;
    char filename[100];
    char text[200];

    // Take filename
    printf("Enter filename: ");
    scanf("%s", filename);
    getchar();  // consume newline after scanf

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Take text input
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}
