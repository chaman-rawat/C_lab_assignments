// Write a C program to check whether a character is an alphabet, digit or special character.
#include <stdio.h>

int main()
{
    int month;
    printf("Enter month: ");
    scanf("%d", &month);

    switch (month)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30\n");
        break;
    case 2:
        printf("28 or 29\n");
        break;
    default:
        printf("31\n");
        break;
    }
    return 0;
}