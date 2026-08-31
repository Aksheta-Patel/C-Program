/**
 * @file pass_fail.c
 * @brief Checks whether a number represents a pass or fail result.
 *
 * This program takes a number from the user and uses the ternary
 * operator to store 'p' for a value greater than 35 and 'f'
 * otherwise.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes an integer from the user.
 * - Checks whether the value is greater than 35.
 * - Stores 'p' for pass or 'f' for fail.
 * - Displays the result.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the number entered by the user */
    int a;

    /** Character representing pass */
    char pass = 'p';

    /** Character representing fail */
    char fail = 'f';

    /** Stores the final pass or fail result */
    char result;

    while (1)
    {
        printf("Enter the number: ");

        if (scanf("%d", &a) == 1)
        {
            break;
        }

        printf("Invalid input. Please enter an integer again.\n");

        while (getchar() != '\n');
    }

    result = (a > 35) ? pass : fail;

    printf("Result is %c\n", result);

    return 0;
}