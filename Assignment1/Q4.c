#include <stdio.h>

int main()
{
    char str[16];
    printf("Enter the string: ");
    fgets(str, 16, stdin);
    printf("Your String: %15s     ", str);
    return 0;
}