/**
 * @file division_modulus.c
 * @brief Demonstrates integer division and modulus operations.
 *
 * This program performs integer division and modulus operations
 * using two integer variables and displays the results.
 */

#include <stdio.h>

/** First integer value */
int a = 15;

/** Second integer value */
int b = 10;

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Performs integer division of a by b.
 * - Finds the remainder when a is divided by b.
 * - Displays both results.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    printf("Integer division result is %d\n", a / b);
    printf("Remainder after division is %d\n", a % b);

    return 0;
}