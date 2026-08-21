#include <stdio.h>

int main()
{
    float c, f, f1, c1;

    printf("Enter Celsius and Fahrenheit: ");
    scanf("%f %f", &c, &f);

    f1 = (c * 9 / 5) + 32;
    c1 = (f - 32) * 5 / 9;

    printf("Fahrenheit = %.2f\n", f1);
    printf("Celsius = %.2f", c1);

    return 0;
}