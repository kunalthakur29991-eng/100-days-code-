//Q140: Define a struct with enum Gender and print person's gender.
 #include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender gender;
};

int main()
 {
      printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    char input[10];
    struct Person p;

    scanf("Gender=%s", input);

    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0)
        p.gender = FEMALE;
    else
        p.gender = OTHER;

    switch (p.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
    }

    return 0;
}
