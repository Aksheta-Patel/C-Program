/**
 * @file diamond_pattern.c
 * @brief Prints a diamond star pattern.
 *
 * This program takes the number of rows from the user and prints
 * a diamond-shaped pattern using nested for loops.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes the number of rows from the user.
 * - Validates that the number is between 1 and 50.
 * - Prints the upper half of the diamond.
 * - Prints the lower half of the diamond.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Controls the rows of the pattern */
    int i;

    /** Controls the spaces and stars */
    int j;

    /** Stores the number of rows */
    int n;

    while (1)
    {
        printf("Enter the number of rows between 1 and 50: ");

        if (scanf("%d", &n) == 1 && n >= 1 && n <= 50)
        {
            break;
        }

        printf("Invalid input. Please enter a number between 1 and 50 again.\n");

        while (getchar() != '\n');
    }

    printf("Diamond pattern is:\n");

    /* Print upper half */
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    /* Print lower half */
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
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