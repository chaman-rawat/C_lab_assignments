#include <stdio.h>

int main()
{
    char str[16];
    printf("Enter the string: ");
    fgets(str, 16, stdin);
    printf("Your String:      %s\n", str);
    return 0;
}