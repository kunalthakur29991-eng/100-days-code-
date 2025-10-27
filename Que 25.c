// Que 25 : Wrute a program to implement a basic calculator using switch - case for + , - , * , / , % .
         #include <stdio.h>

int main()
 {
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    float num1, num2;
    char op;

    printf("Enter two numbers and an operator (+, -, *, /, %%): ");
    scanf("%f %f %c", &num1, &num2, &op);

    switch(op) {
        case '+':
            printf("%.2f\n", num1 + num2);
            break;
        case '-':
            printf("%.2f\n", num1 - num2);
            break;
        case '*':
            printf("%.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2f\n", num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        case '%':
            if ((int)num2 != 0)
                printf("%d\n", (int)num1 % (int)num2);
            else
                printf("Error! Modulus by zero.\n");
            break;
        default:
            printf("Invalid Operator!\n");
    }

    return 0;
}
