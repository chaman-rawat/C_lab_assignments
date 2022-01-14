// Write a program to store information of 5 students in structure and display it.
#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
};

int main()
{
    const int count = 5;
    Student students[count];

    printf("Enter %d students details (Roll_no, Name)\n", count);
    for (int i = 0; i < count; i++)
        scanf("%d %[^\n]s", &students[i].roll_no, students[i].name);

    printf("Students details\n");
    for (int i = 0; i < count; i++)
        printf("Student %d:\n\tRoll No.: %d, Name: %s\n", i + 1, students[i].roll_no, students[i].name);

    return 0;
}
