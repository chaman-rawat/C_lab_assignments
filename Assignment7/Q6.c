// Write a program in C to sort an array using Pointer.
#include <stdio.h>

int main()
{
    int arr[] = {4, 2, 5, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size - 1; j++)
            if (*(ptr + j) > *(ptr + j + 1))
            {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }

    printf("After Sorting : ");
    for (int i = 0; i < size; i++)
        printf("%d ", *(ptr + i));
    return 0;
}