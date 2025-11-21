//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
 #include <stdio.h>
#include <string.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() 
{
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    char input[10];
    enum TrafficLight signal;

    // Read input (RED/YELLOW/GREEN)
    scanf("%s", input);

    // Convert input string to enum value
    if (strcmp(input, "RED") == 0)
        signal = RED;
    else if (strcmp(input, "YELLOW") == 0)
        signal = YELLOW;
    else if (strcmp(input, "GREEN") == 0)
        signal = GREEN;
    else {
        printf("Invalid Input\n");
        return 0;
    }

    // Output message based on signal
    switch (signal) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}
