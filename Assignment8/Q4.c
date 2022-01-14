// WAP to calculate difference between two time periods.
#include <stdio.h>

struct Time
{
    int hour;
    int minute;
    int second;
};

Time difference(Time, Time);

int main()
{
    Time t1, t2, diff;
    printf("Enter Time 1 (hour, minute, second)\n");
    scanf("%d %d %d", &t1.hour, &t1.minute, &t1.second);

    printf("Enter Time 2 (hour, minute, second)\n");
    scanf("%d %d %d", &t2.hour, &t2.minute, &t2.second);

    if (t2.minute > 60 || t2.second > 60 || t2.minute > 60 || t2.second > 60)
    {
        printf("\nInvalid values! (minute / second) should be < 60.\n");
        return 1;
    }

    diff = difference(t1, t2);

    printf("\nTime Difference= %d H : %d M : %d S\n", diff.hour, diff.minute, diff.second);
    return 0;
}

Time difference(Time d1, Time d2)
{
    Time diff;

    diff.second = d1.second - d2.second;
    diff.minute = d1.minute - d2.minute;
    diff.hour = d1.hour - d2.hour;

    if (diff.second < 0)
    {
        diff.second += 60;
        diff.minute--;
    }

    if (diff.minute < 0)
    {
        diff.minute += 60;
        diff.hour--;
    }

    return diff;
}