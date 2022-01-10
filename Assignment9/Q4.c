// Write a C program to sort a list of elements using the insertion sort algorithm.
#include <stdio.h>

void insertion_sort(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
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

    insertion_sort(arr, size);
    printf("After Sorting\n");
    print_array(arr, size);
    return 0;
}