// Check number is palindrome or not
#include <stdio.h>
#include <math.h>

int is_palindrome(int);
int count_digits(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf(is_palindrome(num) ? "Palindrome\n" : "Not Palindrome\n");
    return 0;
}

int is_palindrome(int num)
{
    int digits = count_digits(num);
    int temp = num,
        rev_num = 0;
    do
        rev_num += (temp % 10) * pow(10, --digits);
    while (temp /= 10);

    return rev_num == num;
}

int count_digits(int num)
{
    int n = 1;
    while (num /= 10)
        n++;
    return n;
}