#include <stdio.h>

int main()
{
    FILE *fptr_r, *fptr_w;
    fptr_r = fopen("a.txt", "r");
    fptr_w = fopen("b.txt", "w");
    if (fptr_r == NULL || fptr_w == NULL)
    {
        printf("Error! Can't open file.");
        return 1;
    }

    char name[20], marks[5];
    while (fscanf(fptr_r, "Name: %s Marks: %s\n" , name, marks) == 2)
        fprintf(fptr_w, "%s, %s\n", name, marks);

    fclose(fptr_r);
    fclose(fptr_w);
    return 0;
}