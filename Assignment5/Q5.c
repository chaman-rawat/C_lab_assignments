// Print the following pattern on the screen (using for loop).
// *****
//  ***
//   *
//  ***
// *****
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 5;

    for (int row = 1; row <= num; row++)
    {
        if (row <= (num + 1) / 2)
        {
            for (int space = 1; space < row ; space++)
                printf(" ");
            for (int star = 1; star <= (num - 2 * (row - 1)); star++)
                printf("*");
        }
        else
        {
            for (int space = 1; space < (num - row + 1); space++)
                printf(" ");
            for (int star = 1; star <= 2 * (row - (num / 2)) - 1; star++)
                printf("*");
        }

        printf("\n");
    }
    return 0;
}