// Write a C program to sort a list of elements using the merge sort algorithm.
#include <stdio.h>

void merge(int left[], int right[], int result[], int l_size, int r_size, int size)
{
    int i = 0, j = 0, k = 0;

    while (i < l_size && j < r_size)
    {
        if (left[i] <= right[j])
            result[k++] = left[i++];
        else
            result[k++] = right[j++];
    }

    while (i < l_size)
        result[k++] = left[i++];

    while (j < r_size)
        result[k++] = right[j++];
}

void merge_sort(int *arr, int size)
{
    if (size < 2)
        return;

    // Divide array into two half
    int middle = size / 2;

    int left[middle];
    for (int i = 0; i < middle; i++)
        left[i] = arr[i];

    int right[size - middle];
    for (int i = middle; i < size; i++)
        right[i - middle] = arr[i];

    // Sort each half
    merge_sort(left, middle);
    merge_sort(right, size - middle);

    // Merge the result
    merge(left, right, arr, middle, size - middle, size);
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

    merge_sort(arr, size);

    printf("After Sorting\n");
    print_array(arr, size);
    return 0;
}