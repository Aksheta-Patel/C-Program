/**
 * @file power_of_two.c
 * @brief Checks whether an integer is a power of 2.
 *
 * This program takes an integer from the user and uses a bitwise
 * operation to check whether the number is a power of 2.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes an integer from the user.
 * - Checks that the integer is positive.
 * - Uses the expression a & (a - 1) to check for a power of 2.
 * - Displays whether the number is a power of 2.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the number entered by the user */
    int a;

    while (1)
    {
        printf("Enter a positive integer: ");

        if (scanf("%d", &a) == 1 && a > 0)
        {
            break;
        }

        printf("Invalid input. Please enter a positive integer again.\n");

        while (getchar() != '\n');
    }

    if ((a & (a - 1)) == 0)
        printf("%d is a power of 2.\n", a);
    else
        printf("%d is not a power of 2.\n", a);

    return 0;
}