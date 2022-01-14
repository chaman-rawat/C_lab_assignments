// Write a C program to reverse the array elements.

void reverse(int arr[], int size)
{
    for (int i = 0, temp; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}