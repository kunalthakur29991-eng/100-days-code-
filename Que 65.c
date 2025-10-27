//Q65: Search in a sorted array using binary search.
  #include <stdio.h>

int main()
 {
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int n, i, key;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, index = -1;

    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == key) {
            index = mid;
            break;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(index != -1) {
        printf("Found at index %d\n", index);
    } else {
        printf("-1\n");
    }

    return 0;
}
 
