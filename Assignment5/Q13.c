// Reads an integer between 1 and 12 and print the month of the year in English.
#include <stdio.h>

const char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main()
{
    short num;
    printf("Enter number: ");
    scanf("%hd", &num);

    (num >= 1 && num <= 12)
        ? printf("Month : %s\n", month[num - 1])
        : printf("Enter a valid Number\n");
    return 0;
}