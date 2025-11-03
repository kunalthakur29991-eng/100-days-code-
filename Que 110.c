//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
 #include <stdio.h>

int main() {
    int n, k, i, j;
    
    // Input size of array
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input window size
    scanf("%d", &k);

    // Edge case
    if (k > n || k <= 0) {
        printf("Invalid input");
        return 0;
    }

    // Find maximum in every subarray of size k
    for (i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (j = i + 1; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }
        printf("%d", max);
        if (i != n - k)
            printf(" ");
    }

    return 0;
}
