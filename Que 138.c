//Q138: Print all enum names and integer values using a loop.
 #include <stdio.h>

enum Signal {
    RED,
    YELLOW,
    GREEN
};

int main() 
{
     printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    enum Signal s;
    const char *names[] = {"RED", "YELLOW", "GREEN"};

    for (s = RED; s <= GREEN; s++) {
        printf("%s=%d\n", names[s], s);
    }

    return 0;
}
