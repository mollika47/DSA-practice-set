#include <stdio.h>

int main() {
    int row, col;

    printf("rows: ");
    scanf("%d", &row);
    printf("column: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("Enter elements: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Display array: \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}