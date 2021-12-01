// See if the given character is capital letter or small letter or a digit.
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Capital letter\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Small letter\n");
    else if (ch >= '0' && ch <= '9')
        printf("Digit\n");
    else
        printf("Other\n");
    return 0;
}