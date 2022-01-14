// Write a program to calculate sum of first 20 natural numbers using recursive function.
#include <stdio.h>

int sum(int);

int main()
{
    int n = 20;
    printf("Sum of first %d natural numbers = %d\n", n, sum(n));
    return 0;
}

int sum(int n)
{
    if (n < 1)
        return 0;
    return n + sum(n - 1);
}