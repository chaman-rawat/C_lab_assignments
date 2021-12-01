// Find if given number is even.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (num & 1)
        printf("Odd\n");
    else
        printf("Even\n");
    return 0;
}