//Q77: Check if the elements on the diagonal of a matrix are distinct.
 #include <stdio.h>

int main() 
{
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int rows, cols;
    int i, j;
    int isDistinct = 1; 

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("Matrix must be square.\n");
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
        for(j = i + 1; j < cols; j++) { 
            if(matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if(isDistinct == 0)
            break;
    }

    if(isDistinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
