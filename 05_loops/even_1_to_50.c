/**
 * @file even_numbers.c
 * @brief Prints even numbers from 1 to 50.
 *
 * @details
 * The program uses a for loop to check every number from 1 to 50.
 * If a number is divisible by 2, it is printed as an even number.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The program:
 * - Starts the loop from 1.
 * - Checks numbers up to 50.
 * - Uses the modulus operator to check divisibility by 2.
 * - Prints numbers that are even.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Controls the loop from 1 to 50. */
    int i;

    /** @details Checks every number from 1 through 50. */
    for(i = 1; i <= 50; i++)
    {
        /** @details Checks whether the current number is even. */
        if(i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
