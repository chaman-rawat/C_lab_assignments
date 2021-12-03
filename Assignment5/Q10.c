// See if the given character is capital letter or small letter or a digit.
#include <stdio.h>

int main()
{
    double c1[3]; // Coefficients of Line 1
    double c2[3]; // Coefficients of Line 2

    printf("Use Format as (ax + by + c)\n");
    printf("Equation 1: ");
    scanf("%lfx + %lfy + %lf", &c1[0], &c1[1], &c1[2]);
    printf("Equation 2: ");
    scanf("%lfx + %lfy + %lf", &c2[0], &c2[1], &c2[2]);

    double r1 = c1[0] / c2[0];
    double r2 = c1[1] / c2[1];
    double r3 = c1[2] / c2[2];

    if (r1 == r2)
    {
        if (r2 == r3)
            printf("Coinciding\n");
        else
            printf("Parallel\n");
    }
    else
        printf("Intersecting\n");
    return 0;
}