//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.
 #include <stdio.h>

struct Student 
{
    char name[50];
    int roll_no;
    int marks;
};

int main() 
{
     printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    struct Student s;

    // Taking input
    printf("Name: ");
    scanf("%s", s.name);

    printf("Roll: ");
    scanf("%d", &s.roll_no);

    printf("Marks: ");
    scanf("%d", &s.marks);

    // Printing output
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);

    return 0;
}
