//Q74: Find the transpose of a matrix.
  #include <stdio.h>

int main()
 {
    printf(" Name - Kunal thakur\n SAP id - 590028530\n Course - B.sc CS\n Batch - B1\n ");
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSum[rows];

    for(int i = 0; i < rows; i++)
     {
        for(int j = 0; j < cols; j++)
         {
            scanf("%d", &matrix[i][j]);
         }
     }

    for(int i = 0; i < rows; i++) 
    {
        rowSum[i] = 0;
        for(int j = 0; j < cols; j++) 
        {
            rowSum[i] += matrix[i][j];
        }
    }

    for(int i = 0; i < rows; i++) 
    {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
