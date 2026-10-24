/**
 * @file reverse_numbers.c
 * @brief Prints numbers from 10 down to 1.
 *
 * @details
 * The program uses a while loop to print numbers in decreasing order.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The loop starts with i = 10 and continues while i is greater
 * than or equal to 1. The value of i is decreased by 1 after
 * each iteration.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Controls the loop from 10 down to 1. */
    int i = 10;

    while(i >= 1)
    {
        printf("%d", i);
        i--;
    }

    return 0;
}