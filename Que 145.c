//Q145: Return a structure containing top student's details from a function.
 #include <stdio.h>

struct Student
 {
    char name[50];
    int roll;
    int marks;
};

// Function to find topper and return structure
struct Student getTopper(struct Student s[], int n) {
    int i, maxIndex = 0;

    for(i = 1; i < n; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];  // return topper structure
}

int main()
 {
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    struct Student s[100], topper;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student details
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i+1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    // Function call
    topper = getTopper(s, n);

    // Output
    printf("\nTop Student: %s | Roll: %d | Marks: %d\n",
           topper.name, topper.roll, topper.marks);

    return 0;
}
