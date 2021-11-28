#include <stdio.h>

int main()
{
    char string[50];
    int integer;
    char character;
    float real;
    double large_real;
    unsigned int u_integer;
    int octal;
    int hexadecimal;

    printf("Enter string: ");
    scanf("%s", string);
    printf("String: %s\n\n", string);

    printf("Enter Integer Number: ");
    scanf("%d", &integer);
    printf("Integer Number: %d\n\n", integer);
    
    printf("Enter a Character: ");
    scanf(" %c", &character);
    printf("Character: %c\n\n", character);

    printf("Enter Real Number: ");
    scanf("%f", &real);
    printf("Real Number: %f\n\n", real);
    
    printf("Enter large Real Number: ");
    scanf("%lf", &large_real);
    printf("large Real Number: %lf\n\n", large_real);
    
    printf("Enter Non Negative Integer: ");
    scanf("%u", &u_integer);
    printf("Non Negative Integer: %u\n\n", u_integer);
    
    printf("Enter Octal Number: ");
    scanf("%i", &octal);
    printf("Octal Number: %o\n\n", octal);

    printf("Enter Hexadecimal Number: ");
    scanf("%i", &hexadecimal);
    printf("Hexadecimal Number: %x\n", hexadecimal);

    return 0;
}