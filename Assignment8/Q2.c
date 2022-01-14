// WAP to add two complex numbers by passing structures to a function.
#include <stdio.h>

struct Complex
{
    int real;
    int img;
};

Complex add(Complex, Complex);

int main()
{
    Complex num1, num2, sum;
    printf("Enter number 1 (real, imaginary)\n");
    scanf("%d %d", &num1.real, &num1.img);

    printf("Enter number 2 (real, imaginary)\n");
    scanf("%d %d", &num2.real, &num2.img);

    sum = add(num1, num2);

    printf("\nSum = (%d + %di)\n", sum.real, sum.img);
    return 0;
}

Complex add(Complex num1, Complex num2)
{
    Complex sum;
    sum.real = num1.real + num2.real;
    sum.img = num1.img + num2.img;
    return sum;
}