Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
 #include <stdio.h>

int main() {
    int n, k, i;
    
    // Input array size
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input k
    scanf("%d", &k);

    // Edge case: if k > n
    if (k > n || k <= 0) {
        printf("Invalid input");
        return 0;
    }

    int windowSum = 0;
    for (i = 0; i < k; i++)
        windowSum += arr[i];

    int maxSum = windowSum;

    // Slide the window
    for (i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("%d", maxSum);

    return 0;
}
