// Swap two input values using Call by Value
#include <stdio.h>

void swap(int, int);

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping:\n\tA = %d, B = %d\n", a, b);
    swap(a, b);
    printf("After swapping:\n\tA = %d, B = %d\n", a, b);

    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}