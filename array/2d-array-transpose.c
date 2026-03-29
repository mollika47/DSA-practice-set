#include <stdio.h>

void transpose(int row, int col, int matrix[row][col]) {
    int transposed[col][row];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transposed[j][i] = matrix[i][j];
        }  
    }

    // print transpose
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", transposed[i][j]);
        }  
        printf("\n");
    }
}

int main() {
    int row, col;

    printf("Enter row: ");
    scanf("%d", &row);
    printf("Enter column: ");
    scanf("%d", &col);

    int matrix[row][col];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }  
    }

    printf("After transpose: \n");
    transpose(row, col, matrix);
    
    return 0;
}
