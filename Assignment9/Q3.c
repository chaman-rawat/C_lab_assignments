// Write a C program to sort a list of elements using the bubble sort algorithm.
#include <stdio.h>

void bubble_sort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {4, 2, 3, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, size);
    printf("After Sorting\n");
    print_array(arr, size);
    return 0;
}