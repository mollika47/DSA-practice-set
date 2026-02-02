#include <stdio.h>

// transpose function
void tranpose(int A[10][10], int T[10][10], int m, int n) {
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            T[j][i] = A[i][j];
        }
        
    }
    
}

int main() {

    int A[10][10], T[10][10], m, n;

    // input rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    // input matrix
    printf("Enter elements of matrix: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
        
    }
    
    // calling function
    tranpose(A, T, m, n);

    // display transpose
    printf("Transpose of the matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}