//Q76: Check if a matrix is symmetric. 
#include <stdio.h>

int main()
 {
     printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int rows, cols;
    int i, j;
    int isSymmetric = 1; 
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    if (rows != cols) {
        printf("False\n");
        return 0;
    }
   int matrix[rows][cols];
    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
   }
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(isSymmetric == 0)
            break;
    }

    if(isSymmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
