#include <stdio.h>

int main()
{
    char f_name[50];
    printf("Enter file name to create: ");
    fgets(f_name, 50, stdin);

    FILE *fptr;
    fptr = fopen(f_name, "w");

    if (fptr == NULL)
    {
        printf("Error! Can't open file.");
        return 1;
    }

    char str[1000];
    printf("Enter data: ");
    fgets(str, 1000, stdin);
    fputs(str, fptr);

    fclose(fptr);
    return 0;
}