// Print the following pattern on the screen (using for loop).
//  * * * *
//    * *
//     *
//    * *
//  * * * *
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 5;

    int is_even = !(num & 1);
    int middle = (num + 1) / 2;
    int lines = (is_even) ? num - 1 : num;

    for (int row = 1; row <= lines; row++)
    {
        if (row <= middle) // Upper half (inclusive)
        {
            for (int space = 1; space < row; space++)
                printf("  ");

            if (row == middle && !is_even)
                printf("\b");

            for (int star = 1; star <= (num - 2 * row + 1); star++)
                printf("* ");

            if (row == middle && is_even)
                printf("\b\b");

            if (row == middle)
                printf("* ");
        }
        else // Lower half
        {
            for (int space = 1; space < (num - row + 1); space++)
                printf("  ");

            if (is_even)
                printf("\b\b");

            for (int star = 1; star <= 2 * (row - middle); star++)
                printf("* ");

            if (is_even)
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}