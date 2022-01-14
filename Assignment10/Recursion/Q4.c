// Write a C program to find power of any number using recursion.
#include <stdio.h>

int power(int, int); // Works only for non (-ve) exponent values

int main()
{
    int num = 3, pow = 4;
    printf("%d ^ %d = %d\n", num, pow, power(num, pow));
    return 0;
}

int power(int n, int p)
{
    if (p == 0)
        return 1;
    return n * power(n, p - 1);
}