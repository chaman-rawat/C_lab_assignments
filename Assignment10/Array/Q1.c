// Write a program to perfrom folloing operation in 1-D array elements.
// • Search an elements in array and return the index of it.
// • Perform the addition of all the elements of array.
// • Find the largest and smallest elements in array.
// • Deletion of an element from the specified location from Array.
// • Reverse the elements of array.
#include <stdio.h>

int search(int[], int, int);
int addition(int[], int);
int largest(int[], int);
int smallest(int[], int);
void deletion(int[], int *, int);
void reverse(int[], int);
void print_array(int[], int);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(int);
    printf("Array: ");
    print_array(arr, size);

    int ele = 3;
    printf("\n- Searching, Index of %d is: %d\n", ele, search(arr, size, ele));

    printf("- Addition: %d\n", addition(arr, size));

    printf("- Largest and Smallest element: %d and %d\n", largest(arr, size), smallest(arr, size));

    int index = 2;
    printf("- Deleting index %d, new array: ", index);
    deletion(arr, &size, index);
    print_array(arr, size);

    printf("- Reversing Array: ");
    reverse(arr, size);
    print_array(arr, size);
    return 0;
}

int search(int arr[], int size, int ele)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == ele)
            return i;
    return -1;
}

int addition(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

int largest(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 1; i < size; i++)
        if (largest < arr[i])
            largest = arr[i];
    return largest;
}

int smallest(int arr[], int size)
{
    int smallest = arr[0];
    for (int i = 1; i < size; i++)
        if (smallest > arr[i])
            smallest = arr[i];
    return smallest;
}

void deletion(int arr[], int *size, int index)
{
    for (int i = index; i < *size; i++)
        arr[i] = arr[i + 1];
    (*size)--;
}

void reverse(int arr[], int size)
{
    for (int i = 0, temp; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}