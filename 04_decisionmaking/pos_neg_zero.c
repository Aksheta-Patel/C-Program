/**
 * @file number_sign.c
 * @brief Checks whether an integer is positive, negative, or zero.
 *
 * This program takes an integer from the user and determines
 * whether the number is positive, negative, or zero.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes an integer from the user.
 * - Checks whether the number is positive, negative, or zero.
 * - Displays the result.
 * - Asks the user to enter again if the input is invalid.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the number entered by the user */
    int a;

    while (1)
    {
        printf("Enter an integer: ");

        if (scanf("%d", &a) == 1)
        {
            break;
        }

        printf("Invalid input. Please enter an integer again.\n");

        while (getchar() != '\n');
    }

    if (a > 0)
    {
        printf("The number is positive.\n");
    }
    else if (a < 0)
    {
        printf("The number is negative.\n");
    }
    else
    {
        printf("The number is zero.\n");
    }

    return 0;
}