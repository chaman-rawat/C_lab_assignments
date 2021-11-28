#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Input two integers: ");
    scanf("%d %d", &num1, &num2);
    int sum = num1 + num2;
    int product = num1 * num2;
    printf("Sum: %d,\tProduct: %d\n", sum, product);
    return 0;
}