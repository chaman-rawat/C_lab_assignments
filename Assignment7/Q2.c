// Write a program in C to add two numbers using pointers.
#include <stdio.h>

int main()
{
    int a = 2, b = 5;
    int *pa = &a, *pb = &b;

    printf("Sum = %d\n", *pa + *pb);
    return 0;
}