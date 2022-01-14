// Write a C program to create, declare and initialize structure.
#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
};


int main()
{
    Student s1 = {7, "John Cena"};
    printf("Roll No.: %d\nName: %s\n", s1.roll_no, s1.name);
    return 0;
}
