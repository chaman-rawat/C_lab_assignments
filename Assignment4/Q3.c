// Check if input is alphabets, digits or special character.
#include <stdio.h>

void check_input(char);

int main()
{
    char character;
    printf("Enter an character: ");
    scanf("%c", &character);
    check_input(character);
    return 0;
}

void check_input(char ch)
{
    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
        printf("Alphabet\n");
    else if (ch >= '0' && ch <= '9')
        printf("Digit\n");
    else
        printf("Special Charater\n");
}