#include <stdio.h>

int main()
{
    char str[21];
    printf("Enter the string: ");
    fgets(str, 21, stdin);
    printf("Your String: %s\n", str);
    return 0;
}