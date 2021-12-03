// Read 5 numbers and counts the number of positive numbers and negative numbers.
#include <stdio.h>

int main()
{
    int size = 5;
    int num[size];
    int pos = 0,
        neg = 0;

    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &num[i]);
        (num[i] < 0) ? neg++ : pos++;
    }

    printf("Total Positive Numbers : %d\nTotal Negative Numbers : %d\n", pos, neg);
    return 0;
}