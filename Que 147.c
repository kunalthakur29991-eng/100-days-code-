//Q147: Store employee data in a binary file using fwrite() and read using fread().
 #include <stdio.h>

struct Employee 
{
    char name[50];
    int id;
    float salary;
};

int main()
 {
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    struct Employee e, e_read;
    FILE *fp;

    // --- Writing to binary file ---
    fp = fopen("employee.dat", "wb");
    if(fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nData successfully written to file.\n");


    // --- Reading from binary file ---
    fp = fopen("employee.dat", "rb");
    if(fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    fread(&e_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display read data
    printf("\n--- Data Read From File ---\n");
    printf("Name: %s\n", e_read.name);
    printf("ID: %d\n", e_read.id);
    printf("Salary: %.2f\n", e_read.salary);

    return 0;
}
