// Program to check if input character is a vowel using Switch Case.
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        ch += 'a' - 'A';

    switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel\n");
            break;
        default:
            printf("Not a vowel\n");
            break;
    }
    return 0;
}
