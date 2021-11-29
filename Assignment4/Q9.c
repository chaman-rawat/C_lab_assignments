// Check krishnamurthy number or not (e.g 145 = 1! + 4! + 5!)
#include <stdio.h>
#include "factorial.c"

int is_krishnamurthy_number(int);

int main()
{
    int number;
    printf("Number: ");
    scanf("%d", &number);

    printf(is_krishnamurthy_number(number) ? "Krishnamurthy number\n" : "Not Krishnamurthy number\n");
    return 0;
}

int is_krishnamurthy_number(int num)
{
    unsigned long sum = 0;
    int temp = num;
    do
    {
        sum += factorial(temp % 10);
    } while (temp /= 10);

    return num == sum;
}