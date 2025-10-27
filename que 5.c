// Que 5 : Write aprogram to convert temprature from Celsius to Farenheite .
  #include <stdio.h>

int main() {
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Fahrenheit = %.0f\n", fahrenheit);

    return 0;
}
