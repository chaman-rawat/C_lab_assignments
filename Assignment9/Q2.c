// Write a C program to sort a list of elements using the selection sort algorithm.
#include <stdio.h>

void selection_sort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int min_index = i;

        for (int j = i + 1; j < size; j++)
            if (arr[min_index] > arr[j])
                min_index = j;

        if (arr[min_index] != arr[i])
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
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

    selection_sort(arr, size);
    printf("After Sorting\n");
    print_array(arr, size);
    return 0;
}