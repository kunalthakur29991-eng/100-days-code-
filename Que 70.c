//Q70: Rotate an array to the right by k positions.
 #include <stdio.h>

int main()
 {
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int n, k, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of rotations: ");
    scanf("%d", &k);
    printf("Array after right rotation: ");
    for(i = n - k; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for(i = 0; i < n - k; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
