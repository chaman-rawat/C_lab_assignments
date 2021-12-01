// Identify operators from a given character.
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=' || ch == '<' || ch == '>')
        printf("'%c' is an operator\n", ch);
    else
        printf("'%c' is not an operator\n", ch);
    return 0;
}