#include <stdio.h>

int main()
{
    int number;
    printf("Input: ");
    scanf("%*s %*s %d", &number);
    printf("Output: %d\n", number);
    return 0;
}