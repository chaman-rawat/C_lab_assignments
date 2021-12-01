// Write a C Program to display the pattern like pyramid using the alphabet.
// ------A
// ----A B A
// --A B C B A
// A B C D C B A
#include <stdio.h>

int main()
{
    int num = 4;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= 2 * (num - i); j++)
            printf(" ");

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j <= i)
                printf("%c ", 64 + j);
            else
                printf("%c ", 64 + 2 * i - j);
        }
        printf("\n");
    }
    return 0;
}