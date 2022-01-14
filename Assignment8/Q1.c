// WAP to store Student records as Structures and Sort them by Name.
#include <stdio.h>
#include <string.h>

struct Students
{
    char name[50];
};

void sort_students(Students[], const int);

int main()
{
    const int size = 5;
    Students student[size];

    printf("Enter name of %d students\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Student %d: ", i + 1);
        fgets(student[i].name, 50, stdin);
    }

    sort_students(student, size);

    printf("\nAfter sorting students by name\n");
    for (int i = 0; i < size; i++)
        printf("Student %d: %s", i + 1, student[i].name);

    return 0;
}

void sort_students(Students student[], const int size)
{
    // Using Bubble Sort
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (strcmp(student[j].name, student[j + 1].name) > 0)
            {
                Students temp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp;
            }
}