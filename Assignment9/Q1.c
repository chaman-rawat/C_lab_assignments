// Write a C program for binary search.
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    int start = 0, end = size - 1, middle;

    while (start < end)
    {
        middle = (start + end + 1) / 2;
        if (arr[middle] == target)
        {
            printf("Item found at index: %d\n", middle);
            return 0;
        }
        else if (arr[middle] < target)
            start = middle;
        else
            end = middle;
    }

    printf("Item not found!");
    return 0;
}