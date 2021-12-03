// Check if temperature of a patient given indicates fever
#include <stdio.h>

int main()
{
    float temperature;
    printf("Enter patient temperature (in Celicius): ");
    scanf("%f", &temperature);

    (temperature > 35 && temperature < 38.5)
        ? printf("Patient is Normal\n")
        : printf("Patient has Fever\n");
    return 0;
}