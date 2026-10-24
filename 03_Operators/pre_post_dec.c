/**
 * @file decrement.c
 * @brief Demonstrates pre-decrement and post-decrement operators.
 *
 * This program demonstrates the difference between post-decrement
 * and pre-decrement operations.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Initializes two integer variables.
 * - Demonstrates post-decrement using a--.
 * - Demonstrates pre-decrement using --b.
 * - Displays the resulting values.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Integer variable used for post-decrement */
    int a = 10;

    /** Integer variable used for pre-decrement */
    int b = 5;

    a--;
    printf("Value of a after post-decrement is %d\n", a);

    --b;
    printf("Value of b after pre-decrement is %d\n", b);

    return 0;
}