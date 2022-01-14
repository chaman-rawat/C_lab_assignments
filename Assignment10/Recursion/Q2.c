// Write a program to generate Fibonacci series using recursive function.
#include <stdio.h>

void fibonacci(int);

int main()
{
    int terms = 10;
    fibonacci(terms);
    return 0;
}

void fibonacci(int n)
{
    if (n-- <= 0)
        return;
    static int a = 0, b = 1;
    printf("%d ", a);
    if (n-- <= 0)
        return;
    b += a;
    printf("%d ", b);
    a += b;
    fibonacci(n);
}