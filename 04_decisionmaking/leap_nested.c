/**
 * @file leap_year.c
 * @brief Checks whether a given year is a leap year.
 *
 * This program takes a year from the user and checks whether it
 * is a leap year using the divisibility rules of 4, 100, and 400.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes a year from the user.
 * - Checks whether the year is divisible by 4.
 * - Checks whether the year is divisible by 100.
 * - Checks whether the year is divisible by 400 when required.
 * - Displays whether the year is a leap year or not.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the year entered by the user */
    int year;

    while (1)
    {
        printf("Enter a positive year: ");

        if (scanf("%d", &year) == 1 && year > 0)
        {
            break;
        }

        printf("Invalid year. Please enter a positive year again.\n");

        while (getchar() != '\n');
    }

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("The year is a leap year.\n");
            }
            else
            {
                printf("The year is not a leap year.\n");
            }
        }
        else
        {
            printf("The year is a leap year.\n");
        }
    }
    else
    {
        printf("The year is not a leap year.\n");
    }

    return 0;
}