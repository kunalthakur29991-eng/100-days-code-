// Que 45 : Write a program to find the sum of the series : 2/3 + 4/7 + 6/11 + 8/15 + ..... up to n terms .
      #include <stdio.h>

int main()
 {
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int n, i;
    double sum = 0.0;
    int numerator = 2, denominator = 3;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;

        numerator += 2;   
        denominator += 4; 
    }

    printf("Approximate sum: %.2lf\n", sum);

    return 0;
}
