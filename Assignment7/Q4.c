// Write a program in C to store n elements in an array and print the elements using pointer.
#include <stdio.h>

int main()
{
    int n = 5;
    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements : ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", (ptr + i));

    printf("Array elements are : ");
    for (int i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
    return 0;
}