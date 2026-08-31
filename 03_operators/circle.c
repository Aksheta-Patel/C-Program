/**
 * @file circle.c
 * @brief Calculates the area and circumference of a circle.
 *
 * This program takes the radius of a circle from the user
 * and calculates its area and circumference.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes the radius of a circle as input.
 * - Validates the radius.
 * - Calculates the area of the circle.
 * - Calculates the circumference of the circle.
 * - Displays both results.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the radius of the circle */
    float r;

    /** Stores the area of the circle */
    float area;

    /** Stores the circumference of the circle */
    float circumference;

    while (1)
    {
        printf("Enter the radius: ");

        if (scanf("%f", &r) == 1 && r >= 0)
        {
            break;
        }

        printf("Invalid radius. Please enter a positive value again.\n");

        while (getchar() != '\n');
    }

    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;

    printf("Area of the circle is %.2f\n", area);
    printf("Circumference of the circle is %.2f\n", circumference);

    return 0;
}