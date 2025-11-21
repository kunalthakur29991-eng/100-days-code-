//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
  #include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main()
 {
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    FILE *fp;
    int n;

    // Ask how many students
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input student records
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number and marks of student %d:\n", i + 1);
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Write records to file
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %d %d\n", s[i].name, s[i].roll, s[i].marks);
    }

    fclose(fp);

    // Read back the records
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    while (fscanf(fp, "%s %d %d", s[0].name, &s[0].roll, &s[0].marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               s[0].name, s[0].roll, s[0].marks);
    }

    fclose(fp);
    return 0;
}
