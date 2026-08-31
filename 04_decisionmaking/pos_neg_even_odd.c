/**
 * @file number_type.c
 * @brief Identifies whether a number is positive, negative, zero,
 *        even, or odd.
 *
 * This program takes an integer from the user and checks whether
 * it is positive, negative, or zero. For non-zero numbers, it also
 * checks whether the number is even or odd.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes an integer from the user.
 * - Checks whether the number is positive, negative, or zero.
 * - Checks whether a non-zero number is even or odd.
 * - Displays the result.
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
        if (a % 2 == 0)
        {
            printf("The number is positive and even.\n");
        }
        else
        {
            printf("The number is positive and odd.\n");
        }
    }
    else if (a < 0)
    {
        if (a % 2 == 0)
        {
            printf("The number is negative and even.\n");
        }
        else
        {
            printf("The number is negative and odd.\n");
        }
    }
    else
    {
        printf("The number is zero and even.\n");
    }

    return 0;
}