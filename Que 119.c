//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
 #include <stdio.h>

int main()
 {
    printf("Name - Kunal thakur\n Sap id - 590028530\n Course - B sc CS\n Batch - B1\n");
    int n;
    scanf("%d", &n);

    int arr[n];
    int visited[n];   // to mark visited elements

    // Initialize visited array to 0
    for(int i = 0; i < n; i++)
        visited[i] = 0;

    // Read input + detect duplicate in one iteration
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(visited[arr[i]] == 1) {
            printf("%d", arr[i]);
            return 0;
        } else {
            visited[arr[i]] = 1;
        }
    }

    return 0;
}
