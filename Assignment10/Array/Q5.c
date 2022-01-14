// Perform the addition of two 2-D matrix of size (3X3). Display the addition in matrix form.
#include <stdio.h>

int main()
{
    const int n = 3;

    int mat1[n][n] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int mat2[n][n] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}};

    int product[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            product[i][j] = 0;
            for (int k = 0; k < n; k++)
                product[i][j] += mat1[i][k] * mat2[k][j];
        }

    printf("Resultant matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }
    return 0;
}