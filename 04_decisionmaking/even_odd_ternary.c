/**
 * @file even_odd_ternary.c
 * @brief Checks whether an integer is even or odd using the ternary operator.
 *
 * This program takes an integer from the user and uses the ternary
 * operator to store 0 for an even number and 1 for an odd number.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes an integer from the user.
 * - Checks whether the integer is even or odd.
 * - Stores 0 for even and 1 for odd.
 * - Displays the result.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the number entered by the user */
    int a;

    /** Stores 0 for even and 1 for odd */
    int result;

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

    result = (a % 2 == 0) ? 0 : 1;

    printf("The result is %d (0 = even, 1 = odd).\n", result);

    return 0;
}