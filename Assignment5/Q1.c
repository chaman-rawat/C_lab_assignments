// Count number of days from 1st January to a given date. (With and without break statement)
#include <stdio.h>

short count_days(short, short); // Using Array
short count_days_alt(short, short); // Using Switch

int main()
{
    short date, month;
    printf("Enter date: ");
    scanf("%hd", &date);
    printf("Enter month: ");
    scanf("%hd", &month);

    printf("Total days: %hd\n", count_days(date, month));
    printf("Total days: %hd\n", count_days_alt(date, month));

    return 0;
}

short count_days(short date, short month)
{
    short months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    short day = 0;

    for (int i = 0; i < month - 1; i++)
        day += months[i];

    day += date;
    return day;
}

short count_days_alt(short date, short month)
{
    short day = 0;

    switch (month)
    {
    case 12:
        day += 30;
    case 11:
        day += 31;
    case 10:
        day += 30;
    case 9:
        day += 31;
    case 8:
        day += 31;
    case 7:
        day += 30;
    case 6:
        day += 31;
    case 5:
        day += 30;
    case 4:
        day += 31;
    case 3:
        day += 28;
    case 2:
        day += 31;
    default:
        break;
    }

    day += date;
    return day;
}