//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
 #include <stdio.h>

int main() {
    int n, i;

    // Input array size
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSoFar = arr[0];   // Overall maximum sum
    int currMax = arr[0];    // Current subarray sum

    for (i = 1; i < n; i++) {
        if (currMax + arr[i] > arr[i])
            currMax = currMax + arr[i];
        else
            currMax = arr[i];

        if (currMax > maxSoFar)
            maxSoFar = currMax;
    }

    printf("%d", maxSoFar);

    return 0;
}
