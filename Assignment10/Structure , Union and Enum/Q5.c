// Write a program to show programming examples with union and enumerations.
#include <stdio.h>

int main()
{
    // Union example
    union Character
    {
        char ch;
        int value;
    } c1;
    c1.value = 65;
    printf("ASCII code of '%c' is : %d\n", c1.ch, c1.value);

    // Enumerations example
    enum Week { sun, mon, tue, wed, thu, fri, sat };
    Week day = fri;
    printf("Friday : %d\n", day);
    return 0;
}