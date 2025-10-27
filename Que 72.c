//Q72: Find the sum of all elements in a matrix.
 #include <stdio.h>

int main() 
{
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int sum = 0;
    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < cols; j++)
         {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
         }
    }

    printf("%d", sum);

    return 0;
}
