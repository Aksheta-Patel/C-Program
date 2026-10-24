/**
 * @file operator_precedence.c
 * @brief Demonstrates operator precedence and parentheses.
 *
 * This program demonstrates how multiplication is evaluated
 * before addition and compares an expression with and without
 * parentheses.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Initializes three integer values.
 * - Calculates an expression without parentheses.
 * - Calculates the same expression with parentheses.
 * - Displays both results.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** First integer value */
    int a = 10;

    /** Second integer value */
    int b = 5;

    /** Third integer value */
    int c = 2;

    /** Stores the result without parentheses */
    int r1 = a + b * c;

    printf("Result without parentheses is %d\n", r1);

    /** Stores the result with parentheses */
    int r2 = a + (b * c);

    printf("Result with parentheses is %d\n", r2);

    return 0;
}