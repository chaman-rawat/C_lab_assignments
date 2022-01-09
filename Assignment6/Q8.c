// Write a C program to check whether a character is an alphabet, digit or special character.
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
        printf("Digits\n");
    else if ((ch >= 'A' && ch <= 'B') || (ch >= 'a' && ch <= 'z'))
        printf("Alphabets\n");
    else
        printf("Special Char\n");
    return 0;
}