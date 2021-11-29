#include <stdio.h>

int main()
{
    FILE *fptr_r, *fptr_w;
    fptr_r = fopen("abc.txt", "r");
    fptr_w = fopen("def.txt", "w");
    if (fptr_r == NULL || fptr_w == NULL)
    {
        printf("Error! Can't open file.");
        return 1;
    }

    char name[20], age[3], city[30];
    while (fscanf(fptr_r, "Name: %s , Age: %s , City: %s\n" , name, age, city) == 3)
        fprintf(fptr_w, "%s %s %s\n", name, age, city);

    fclose(fptr_r);
    fclose(fptr_w);
    return 0;
}