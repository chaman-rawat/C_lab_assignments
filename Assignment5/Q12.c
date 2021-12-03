// Find maximum number of has given three numbers (with and without conditional operator).
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\n(Using Conditional operator)\n : ");
    (a >= b)
        ? (a >= c)
            ? printf("%d is Maximum\n", a)
            : printf("%d is Maximum\n", c)
        : (b >= c)
            ? printf("%d is Maximum\n", b)
            : printf("%d is Maximum\n", c);

    printf("\n(Without using Conditional operator)\n : ");
    if (a >= b)
    {
        if (a >= c)
            printf("%d is Maximum\n", a);
        else
            printf("%d is Maximum\n", c);
    }
    else
    {
        if (b >= c)
            printf("%d is Maximum\n", b);
        else
            printf("%d is Maximum\n", c);
    }
    return 0;
}
