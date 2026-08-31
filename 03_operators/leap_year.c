/**
 * @file leap_year.c
 * @brief Checks whether a year is a leap year.
 *
 * This program takes a year from the user and checks whether
 * it is a leap year using the divisibility rules.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes a year as input.
 * - Checks whether the year is divisible by 400.
 * - Checks whether the year is divisible by 4 but not by 100.
 * - Displays whether the year is a leap year.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the year entered by the user */
    int year;

    while (1)
    {
        printf("Enter a year: ");

        if (scanf("%d", &year) == 1 && year > 0)
        {
            break;
        }

        printf("Invalid year. Please enter a positive year again.\n");

        while (getchar() != '\n');
    }

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}