#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rows = 2;
    int cols = 2;
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }
    if (matrix == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    int value = 1;
    printf("Enter values for the 2x2 matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("2x2 Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
