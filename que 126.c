//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
 #include <stdio.h>

int main()
 {
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    FILE *fp;
    char filename[100];
    char line[200];

    // Take filename from user
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try opening the file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");

    // Read and print file content
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
