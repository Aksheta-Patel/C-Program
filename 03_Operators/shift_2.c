/**
 * @file bit_shift.c
 * @brief Demonstrates left and right bitwise shift operators.
 *
 * This program demonstrates left shifting and right shifting
 * of integer values using the << and >> operators.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Initializes two integer values.
 * - Performs a left shift on the first value.
 * - Performs a right shift on the second value.
 * - Displays the results.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** First integer value */
    int a = 10;

    /** Second integer value */
    int b = 20;

    a = a << 1;

    printf("Value of a after left shift is %d\n", a);

    b = b >> 1;

    printf("Value of b after right shift is %d\n", b);

    return 0;
}