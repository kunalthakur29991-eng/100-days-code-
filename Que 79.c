//Q79: Perform diagonal traversal of a matrix.
 #include <stdio.h>

int main() 
{
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int rows, cols;
    int i, j, d;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal Traversal: ");
    for(d = 0; d < rows + cols - 1; d++) {
        if(d % 2 == 0) { 
            i = (d < rows) ? d : rows - 1;
            j = d - i;
            while(i >= 0 && j < cols) {
                printf("%d ", matrix[i][j]);
                i--;
                j++;
            }
        } else { 
            j = (d < cols) ? d : cols - 1;
            i = d - j;
            while(j >= 0 && i < rows) {
                printf("%d ", matrix[i][j]);
                i++;
                j--;
            }
        }
    }

    printf("\n");
    return 0;
}
