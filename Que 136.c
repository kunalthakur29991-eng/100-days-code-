//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
 #include <stdio.h>
#include <string.h>

enum Menu {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main()
 {
     printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    char choice[10];
    int a, b;
    enum Menu m;

    scanf("%s %d %d", choice, &a, &b);

    if (strcmp(choice, "ADD") == 0)
        m = ADD;
    else if (strcmp(choice, "SUBTRACT") == 0)
        m = SUBTRACT;
    else if (strcmp(choice, "MULTIPLY") == 0)
        m = MULTIPLY;
    else {
        printf("Invalid choice\n");
        return 0;
    }

    switch (m) {
        case ADD:
            printf("%d\n", a + b);
            break;

        case SUBTRACT:
            printf("%d\n", a - b);
            break;

        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}
