//Q146: Create Employee structure with nested Date structure for joining date and print details.
 #include <stdio.h>

struct Date
 {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining;
};

int main()
 {
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    struct Employee e;

    // Input
    printf("Name: ");
    scanf("%s", e.name);

    printf("ID: ");
    scanf("%d", &e.id);

    printf("Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &e.joining.day, &e.joining.month, &e.joining.year);

    // Output
    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           e.name, e.id,
           e.joining.day,
           e.joining.month,
           e.joining.year);

    return 0;
}
