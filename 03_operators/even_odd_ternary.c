/**
 * @file odd_even_ternary.c
 * @brief Checks whether an integer is even or odd using the ternary operator.
 *
 * This program takes an integer from the user and uses the ternary
 * operator to determine whether the number is even or odd.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes an integer from the user.
 * - Uses the modulus operator to check whether it is even or odd.
 * - Uses the ternary operator to store 0 for even and 1 for odd.
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

    printf("Result is %d\n", result);

    return 0;
}