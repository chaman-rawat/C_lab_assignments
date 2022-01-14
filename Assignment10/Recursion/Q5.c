// Write a C program to find factorial of any number using recursion.
#include <stdio.h>

int factorial(int);

int main()
{
    int num = 5;
    printf("%d! = %d\n", num, factorial(num));
    return 0;
}

int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}