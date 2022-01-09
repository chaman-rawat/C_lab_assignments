// Write a program in C to find the maximum number between two numbers using a pointer.
#include <stdio.h>

int main()
{
    int a = 5, b = 3;
    int *pa = &a, *pb = &b;

    printf("Max = %d\n", (*pa > *pb) ? *pa : *pb);
    return 0;
}