//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
  #include <stdio.h>

int main() 
{
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    FILE *fp;
    int num;
    int sum = 0, count = 0;

    // Open file
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: numbers.txt not found!\n");
        return 1;
    }

    // Read integers from file
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in file.\n");
        return 0;
    }

    float avg = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
