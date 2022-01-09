// Write a C program to read roll no, name and marks of three subjects and calculate the total, percentage and division.
#include <stdio.h>

int main()
{
    int rollno, total = 0;
    int marks[3];
    float percentage = 0;
    printf("Enter Roll No.: ");
    scanf("%d", &rollno);

    printf("Enter three subjects marks: ");
    for (int i = 0; i < 3; ++i)
    {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = total / 3.0;

    printf("Total : %d\nPercentage : %f", total, percentage);

    if (percentage >= 60)
        printf("\nIst division");
    else if (percentage >= 50)
        printf("\nIInd division");
    else if (percentage >= 33)
        printf("\nIIIrd division");
    else
        printf("\nFail");
    return 0;
}