/**
 * @file numbers.c
 * @brief Prints numbers from 0 to 10.
 *
 * @details
 * The program uses a for loop to print numbers starting from 0
 * and ending at 10.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The loop starts i at 0, continues while i is less than or
 * equal to 10, and increases i by 1 after each iteration.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Controls the loop from 0 to 10. */
    int i;

    for(i = 0; i <= 10; i++)
    {
        printf("%d", i);
    }

    return 0;
}