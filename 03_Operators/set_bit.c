/**
 * @file set_bit.c
 * @brief Demonstrates setting a specific bit using bitwise operators.
 *
 * This program sets bit 2 of an integer using the bitwise OR
 * and left shift operators.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Initializes an integer with the value 10.
 * - Creates a mask for bit 2.
 * - Sets bit 2 using the bitwise OR operator.
 * - Displays the resulting value.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Integer variable initialized with the value 10 */
    int a = 10;

    /* Set bit 2 */
    a = a | (1 << 2);

    printf("Value after setting bit 2 is %d\n", a);

    return 0;
}