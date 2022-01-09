// Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b)
    {
        if (b == c)
            printf("Equilateral\n");
        else
            printf("Isoceles\n");
    }

    else if (b == c || a == c)
        printf("Isoceles\n");
    else
        printf("Scalene\n");
    return 0;
}