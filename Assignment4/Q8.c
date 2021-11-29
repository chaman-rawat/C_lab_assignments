// Calculate the facrtorial of input number
#include <stdio.h>
#include "factorial.c"

int main()
{
    int number;
    printf("Number: ");
    scanf("%d", &number);
    printf("Factorial: %lu\n", factorial(number));
    return 0;
}