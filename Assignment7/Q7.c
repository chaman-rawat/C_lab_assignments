// Write a program in C to add numbers using call by reference.
#include <stdio.h>

void sum(int *x, int *y)
{
    printf("sum = %d\n", *x + *y);
}

int main()
{
    int a = 6, b = 3;
    sum(&a, &b);
    return 0;
}