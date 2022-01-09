// Write a C program to create enumerated data type for 7 days and display their values in integer constants using switch case.
// Sun = 0
// Mon = 1
// Tue = 2
// Wed = 3
// Thu = 4
// Fri = 5
// Sat = 6
#include <stdio.h>

int main()
{
    enum week
    {
        sun,
        mon,
        tue,
        wed,
        thu,
        fri,
        sat
    };
    enum week day = sun;
    switch (day)
    {
    case 0:
        printf("0");
        break;
    case 1:
        printf("1");
        break;
    case 2:
        printf("2");
        break;
    case 3:
        printf("3");
        break;
    case 4:
        printf("4");
        break;
    case 5:
        printf("5");
        break;
    case 6:
        printf("6");
        break;
    default:
        printf("not valid");
    }
    return 0;
}