/**
 * @file star_pyramid.c
 * @brief Prints a centered star pyramid.
 *
 * This program uses nested for loops to print a centered
 * pyramid pattern of stars with 5 rows.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Uses an outer loop to control the rows.
 * - Prints spaces before the stars.
 * - Prints an odd number of stars in each row.
 * - Displays a centered pyramid of 5 rows.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Controls the rows */
    int i;

    /** Controls the spaces and stars */
    int j;

    printf("Star pyramid is:\n");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
