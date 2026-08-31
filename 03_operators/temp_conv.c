/**
 * @file temperature_conversion.c
 * @brief Converts temperatures between Celsius and Fahrenheit.
 *
 * This program takes a Celsius value and a Fahrenheit value from
 * the user and converts them into Fahrenheit and Celsius respectively.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes Celsius and Fahrenheit values from the user.
 * - Converts Celsius to Fahrenheit.
 * - Converts Fahrenheit to Celsius.
 * - Displays both converted values.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the Celsius temperature */
    float c;

    /** Stores the Fahrenheit temperature */
    float f;

    /** Stores the converted Fahrenheit temperature */
    float f1;

    /** Stores the converted Celsius temperature */
    float c1;

    while (1)
    {
        printf("Enter Celsius and Fahrenheit: ");

        if (scanf("%f %f", &c, &f) == 2)
        {
            break;
        }

        printf("Invalid input. Please enter two valid temperatures again.\n");

        while (getchar() != '\n');
    }

    f1 = (c * 9 / 5) + 32;
    c1 = (f - 32) * 5 / 9;

    printf("Temperature in Fahrenheit is %.2f\n", f1);
    printf("Temperature in Celsius is %.2f\n", c1);

    return 0;
}