/**
 * @file multiplication_table.c
 * @brief Prints the multiplication table of a given number.
 *
 * @details
 * The program takes a number from the user and prints its
 * multiplication table from 1 to 10.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The program:
 * - Takes a number from the user.
 * - Multiplies it by numbers from 1 to 10.
 * - Stores each result in table.
 * - Prints each result.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Stores the number entered by the user. */
    int n;

    /** @brief Controls the loop from 1 to 10. */
    int i;

    /** @brief Stores the multiplication result. */
    int table;

    printf("Enter number: ");
    scanf("%d", &n);

    /** @details Calculates the table from 1 to 10. */
    for(i = 1; i <= 10; i++)
    {
        table = n * i;
        printf("%d\n", table);
    }

    return 0;
}