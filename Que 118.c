//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number.
  #include <stdio.h>

int main() 
{
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    int n;
    scanf("%d", &n);       // size of array

    int arr[n];
    int sum = 0;

    // Input array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;

    int missing = expectedSum - sum;

    printf("%d", missing);

    return 0;
}
