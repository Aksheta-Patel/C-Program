/**
 * @file leap_year_range.c
 * @brief Prints all leap years within a given range.
 *
 * This program takes a starting year and an ending year from the user
 * and displays all leap years within that range.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes the first year from the user.
 * - Takes the last year from the user.
 * - Validates the year range.
 * - Checks each year for leap year conditions.
 * - Displays all leap years in the given range.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the first year */
    int a;

    /** Stores the last year */
    int b;

    /** Controls the loop through the years */
    int i;

    while (1)
    {
        printf("Enter the first year: ");

        if (scanf("%d", &a) == 1 && a > 0)
        {
            break;
        }

        printf("Invalid year. Please enter a positive year again.\n");

        while (getchar() != '\n');
    }

    while (1)
    {
        printf("Enter the last year: ");

        if (scanf("%d", &b) == 1 && b >= a)
        {
            break;
        }

        printf("Invalid year. Please enter a year greater than or equal to the first year.\n");

        while (getchar() != '\n');
    }

    printf("Leap years between %d and %d are:\n", a, b);

    for (i = a; i <= b; i++)
    {
        if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
        {
            printf("%d is a leap year.\n", i);
        }
    }

    return 0;
}