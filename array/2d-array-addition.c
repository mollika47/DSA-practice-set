#include <stdio.h>

void addition(int row, int col, int matrix1[row][col], int matrix2[row][col]) {
    int result[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ", result[i][j]);
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

    int matrix1[row][col], matrix2[row][col];

    printf("Enter the 1st matrix elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
        
    }

    printf("Enter the 2nd matrix elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
        
    }
    
    printf("After addition: \n");
    addition(row, col, matrix1, matrix2);

    return 0;
}
