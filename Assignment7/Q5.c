// Write a program in C to find the factorial of a given number using pointers.
#include <stdio.h>

int main()
{
    int num = 5;
    int *p = &num;
    int factorial = 1;

    for (int i = *p; i >= 1; i--)
        factorial *= i;

    printf("%d! = %d\n", *p, factorial);
    return 0;
}