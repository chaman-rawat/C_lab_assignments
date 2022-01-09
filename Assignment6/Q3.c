// Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter coordinate (x,y): ");
    scanf("%d %d", &x, &y);

    if (x >= 0)
    {
        if (y >= 0)
            printf("Ist Quadrant\n");
        else
            printf("IVth Quadrant\n");
    }
    else
    {
        if (y >= 0)
            printf("IInd Quadrant\n");
        else
            printf("IIIrd Quadrant\n");
    }
    return 0;
}