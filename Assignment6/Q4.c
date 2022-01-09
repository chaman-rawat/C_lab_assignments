// Write a C program to find the eligibility of admission for a professional course based on
// the following criteria:
// Marks in Maths >=65
// Marks in Phy >=55
// Marks in Chem>=50
// Total in all three subject >=180
#include <stdio.h>

int main()
{
    int math, phy, chem;
    printf("Enter marks (maths, physics, chemistry): ");
    scanf("%d %d %d", &math, &phy, &chem);

    if (math >= 65 && phy >= 55 && chem >= 50)
        if ((math + phy + chem) >= 180)
        {
            printf("Elligible\n");
            return 0;
        }

    printf("Not Elligible\n");
    return 0;
}