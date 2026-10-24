/**
 * @file positive_input.c
 * @brief Validates that the user enters a positive number.
 *
 * @details
 * The program repeatedly asks the user for a number until
 * a positive number is entered.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * A do-while loop is used so that the user is asked for input
 * at least once. The loop continues while the entered number
 * is less than or equal to zero.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Stores the number entered by the user. */
    int n;

    /** @details Repeats input until a positive number is entered. */
    do
    {
        printf("Enter a positive number: ");
        scanf("%d", &n);

    } while(n <= 0);

    return 0;
}