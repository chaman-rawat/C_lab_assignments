// Write a program in C to swap elements using call by reference.
#include <stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 2, b = 5;
    printf("Before Swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After Swap: a = %d, b = %d\n", a, b);
    return 0;
}