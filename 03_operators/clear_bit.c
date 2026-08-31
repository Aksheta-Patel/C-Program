/**
 * @file clear_bit.c
 * @brief Demonstrates clearing a specific bit using bitwise operators.
 *
 * This program clears bit 1 of an integer using the bitwise AND,
 * NOT, and left shift operators.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Initializes an integer with the value 10.
 * - Creates a mask for bit 1.
 * - Clears bit 1 using bitwise operators.
 * - Displays the resulting value.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Integer variable initialized with the value 10 */
    int a = 10;

    /* Clear bit 1 */
    a = a & ~(1 << 1);

    printf("Value after clearing bit 1 is %d\n", a);

    return 0;
}