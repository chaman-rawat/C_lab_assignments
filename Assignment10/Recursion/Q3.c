// Write a program to find sum of digits of the number using Recursive Function.
#include <stdio.h>

int sum_of_digits(int);

int main()
{
    int num = 1532;
    printf("Sum of the digits of %d = %d\n", num, sum_of_digits(num));
    return 0;
}

int sum_of_digits(int n)
{
    if (n <= 0)
        return 0;
    static int sum = 0;
    return sum + (n % 10 ) + sum_of_digits(n / 10);
}