//Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

//N.B:
//- Print the output for each element in a comma separated fashion.
//- Do not use Stack, use brute force approach (nested loop) to solve.
#include <stdio.h>

int main() {
    int n, i;
    
    // Input size
    scanf("%d", &n);
    int arr[n], result[n], stack[n];
    int top = -1;  // stack pointer

    // Input elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Traverse from right to left
    for (i = n - 1; i >= 0; i--) {
        // Pop smaller elements from stack
        while (top != -1 && stack[top] <= arr[i])
            top--;

        // If stack becomes empty, no greater element exists
        if (top == -1)
            result[i] = -1;
        else
            result[i] = stack[top];

        // Push current element onto stack
        stack[++top] = arr[i];
    }

    // Print results
    for (i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i != n - 1)
            printf(", ");
    }

    return 0;
}
