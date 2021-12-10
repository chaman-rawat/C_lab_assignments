// Check number is palindrome or not
#include <stdio.h>
#include <math.h>

bool is_palindrome(char *);
int strlen(char *);

int main()
{
    char num[50];
    printf("Enter a number: ");
    scanf("%s", num);
    printf(is_palindrome(num) ? "Palindrome\n" : "Not Palindrome\n");
    return 0;
}

bool is_palindrome(char *num)
{
    int len = strlen(num);
    for (int i = 0, j = len - 1; i <= j; i++, j--)
    {
        if (num[i] == '.')
            i++;
        if (num[j] == '.')
            j--;
        if (num[i] != num[j])
            return false;
    }

    return true;
}

int strlen(char *str)
{
    int len = 0;
    while (str[len++]);
    return --len;
}