//Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main()
 {
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int n, i, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n+1]; 
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    int pos = n; 
    for(i = 0; i < n; i++) {
        if(arr[i] > key) {
            pos = i;
            break;
        }
    }

    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = key;

    printf("Array after insertion: ");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
