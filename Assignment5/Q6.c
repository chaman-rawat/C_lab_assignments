// display the pattern like right angle triangle with a number. The pattern like (using for loop):
// 1
// 12
// 123
// 1234
#include <stdio.h>

int main()
{
    int num = 4;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}