#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("file.txt", "r");
    if (fptr == NULL)
    {
        printf("Error! Can't open file.");
        return 1;
    }

    char c = fgetc(fptr);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(fptr);
    }

    fclose(fptr);
    return 0;
}