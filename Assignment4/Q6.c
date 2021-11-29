// Check input number is divisible by 5 and 11 using function.
#include <stdio.h>

int is_divisble(int);

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if (is_divisble(number))
        printf("Divisible by 5 and 11\n");
    else
        printf("Not divisible by 5 and 11\n");
    return 0;
}

int is_divisble(int num)
{
    return !(num % 55);
}