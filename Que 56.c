//Q56: Read and print elements of a one-dimensional array.
   #include <stdio.h>

int main()
 {
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

