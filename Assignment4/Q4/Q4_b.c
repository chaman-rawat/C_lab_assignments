// Print all armstrong number between 1 to 1000
#include <stdio.h>
#include "is_armstrong.c"

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 1000; i++)
        if(is_armstrong(i))
            printf("%d\n", i);
    return 0;
}