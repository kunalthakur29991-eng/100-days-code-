//Q68: Delete an element from an array.
#include <stdio.h>

int main()
 {
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > n)
     {
        printf("Invalid position!\n");
        return 0;
    }

    for(i = pos - 1; i < n - 1; i++)
     {
        arr[i] = arr[i + 1];
    }

    n--; 
    
    printf("Array after deletion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
