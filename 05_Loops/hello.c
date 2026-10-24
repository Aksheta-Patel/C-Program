/**
 * @file right_shift_loop.c
 * @brief Demonstrates a for loop using right shift.
 *
 * @details
 * The program starts with i = 1024 and repeatedly divides i by 2
 * using the right-shift assignment operator until i becomes 0.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The for loop:
 * - Starts with i = 1024.
 * - Uses i as the loop condition.
 * - Prints "Hello" while i is not zero.
 * - Right-shifts i by one bit after every iteration.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Controls the loop and stores the current value. */
    int i = 1024;

    /** @details Continues while i is not zero. */
    for(; i; i >>= 1)
    {
        printf("Hello\n");
    }

    return 0;
}