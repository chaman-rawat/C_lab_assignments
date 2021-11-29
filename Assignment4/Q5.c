// Convert decimal into binary using function.
#include <stdio.h>
#include <math.h>

unsigned long decimal_to_binary(int);

int main()
{
    int decimal;
    printf("Enter a decimal value: ");
    scanf("%d", &decimal);

    printf("Binary: %lu\n", decimal_to_binary(decimal));
    return 0;
}

unsigned long decimal_to_binary(int num)
{
    unsigned long binary = 0;
    int i = 0;
    do
    {
        binary += num % 2 * pow(10, i++);
    } while (num /= 2);

    return binary;
}