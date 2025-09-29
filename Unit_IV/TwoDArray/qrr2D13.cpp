// write a program in C to multiple two matrices using 2D arrays
#include <stdio.h>

int main()
{
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int b[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}};

    int result[3][3], i, j, k;

    // Initialize result matrix to 0
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result[i][j] = 0;
        }
    }

    // Multiply matrices
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                result[i][j] = result[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }

    // Print first matrix
    printf("First Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Print second matrix
    printf("\nSecond Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Print result matrix
    printf("\nResultant Matrix (Multiplication):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
