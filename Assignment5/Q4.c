// print the following thing on the screen (using for loop).
// *
// **
// ***
// ****
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 4;

    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col <= row; col++)
            printf("*");
        printf("\n");
    }
    return 0;
}