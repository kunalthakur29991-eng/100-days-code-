// Que 24 : Write a program to calculate electricity bill based on unit consumed with these rates :
            // First 100 units at 5 rupee/unit 
            // Next 100 unit at 7 rupee/unit 
            // Next 100 unit at 10 rupee/unit 
            // Above at 12 rupee/unit .
    #include <stdio.h>

int main()
 {
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int units;
    float bill = 0;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    printf("Bill: ?%.2f\n", bill);

    return 0;
}
