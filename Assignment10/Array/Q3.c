// Write a C program to store the elements of 2-D matrix(3X3) in array. Also display the elements in matrix formate.
#include <stdio.h>

int main()
{
    const int n = 3;
    int matrix[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    printf("Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}