#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("Enter the Row and Column for Matrix 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the Row and Column for Matrix 2: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2)
        printf("Matrix Multiplication is not possible..");
    else
    {
        int A[r1][c1], B[r2][c2], C[r1][c2];
        printf("Enter the Matrix 1 elements:\n");
        int i, j, k;
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }
        printf("Enter the Matrix 2 elements:\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                C[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        printf("Resultant Matrix after Multiplication:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    }
}