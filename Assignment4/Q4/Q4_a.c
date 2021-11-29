// Check number is armstrong or not
#include <stdio.h>
#include "is_armstrong.c"

int main(int argc, char const *argv[])
{
    int number;
    printf("Input a number: ");
    scanf("%d", &number);

    printf(is_armstrong(number) ? "Armstrong\n" : "Not Armstrong\n");
    return 0;
}