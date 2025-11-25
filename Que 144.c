//Q144: Write a function that accepts a structure as parameter and prints its members.
 #include <stdio.h>

struct Student 
{
    char name[50];
    int roll;
    int marks;
};

// Function that accepts structure and prints members
void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main()
 {
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    struct Student st;

    // Input
    printf("Name: ");
    scanf("%s", st.name);

    printf("Roll: ");
    scanf("%d", &st.roll);

    printf("Marks: ");
    scanf("%d", &st.marks);

    // Call function
    display(st);

    return 0;
}
