/**
 * @file increment.c
 * @brief Demonstrates pre-increment and post-increment operators.
 *
 * This program demonstrates the use of the post-increment and
 * pre-increment operators on integer variables.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Initializes two integer variables.
 * - Demonstrates post-increment using a++.
 * - Demonstrates pre-increment using ++b.
 * - Displays the updated values.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Integer variable used for post-increment */
    int a = 10;

    /** Integer variable used for pre-increment */
    int b = 5;

    a++;
    printf("Value of a after post-increment is %d\n", a);

    ++b;
    printf("Value of b after pre-increment is %d\n", b);

    return 0;
}