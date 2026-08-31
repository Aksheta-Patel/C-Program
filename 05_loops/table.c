/**
 * @file multiplication_table.c
 * @brief Generates and prints a multiplication table for a given number.
 *
 * @details
 * The program prompts the user for an integer and uses a for loop
 * to calculate and print its multiples from 0 to 9.
 */

#include <stdio.h>

/** @brief Loop counter for iterating through the multipliers (0 to 9). */
int i;

/** @brief Stores the base number entered by the user for the table. */
int j;

/**
 * @brief Main function of the program.
 *
 * @details
 * Reads an integer from the user and prints its multiplication
 * table up to a multiplier of 9.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    printf(" enter number");
    scanf("%d", &j);

    /** 
     * @brief Loop to calculate and print the multiplication table.
     * @details Iterates from 0 to 9, printing the equation and product 
     * for each multiplier against the user's input.
     */
    for (i = 0; i < 10; i++)
    {
        printf("%d*%d =%d\n", j, i, i * j);
    }

    return 0;
}