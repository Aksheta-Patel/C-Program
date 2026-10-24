/**
 * @file skip_multiples_of_three.c
 * @brief Demonstrates the use of the continue statement to skip multiples of 3.
 *
 * @details
 * The program iterates from 1 to 20, using an if condition and the continue 
 * statement to bypass printing whenever the number is a multiple of 3.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * Loops through numbers 1 through 20. If a number is divisible by 3, 
 * the continue statement skips the print step for that iteration.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Loop counter representing the current number. */
    int n;

    /** 
     * @brief Loop from 1 to 20 to check and print numbers.
     */
    for(n = 1; n <= 20; n++)
    {
        /** 
         * @brief Check if the current number is a multiple of 3.
         * @details If true, skip the rest of the loop iteration.
         */
        if(n % 3 == 0)
            continue;

        printf("%d ", n);
    }

    return 0;
}