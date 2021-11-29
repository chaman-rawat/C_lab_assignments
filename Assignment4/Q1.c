// Sum and product of two number
#include <stdio.h>

int sum(int, int);
int product(int, int);

int main()
{
    int num1, num2;
    printf("Enter numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum: %d \tProduct: %d\n", sum(num1, num2), product(num1, num2));
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

int product(int a, int b)
{
    return a * b;
}