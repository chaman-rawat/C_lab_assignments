// WAP to add two distances (in inch-feet) using structure.
#include <stdio.h>

struct Distance
{
    int feet;
    int inch;
};

Distance add(Distance, Distance);

int main()
{
    Distance d1, d2, sum;
    printf("Enter distance 1 (feet, inch)\n");
    scanf("%d %d", &d1.feet, &d1.inch);

    printf("Enter distance 2 (feet, inch)\n");
    scanf("%d %d", &d2.feet, &d2.inch);

    if (d1.inch >= 12 || d2.inch >= 12)
    {
        printf("\nInvalid values! inch should be < 12.\n");
        return 1;
    }

    sum = add(d1, d2);

    printf("\nSum = %d Feets, %d Inches\n", sum.feet, sum.inch);
    return 0;
}

Distance add(Distance d1, Distance d2)
{
    Distance sum;
    sum.inch = (d1.inch + d2.inch) % 12;
    sum.feet = d1.feet + d2.feet + (d1.inch + d2.inch) / 12;
    return sum;
}