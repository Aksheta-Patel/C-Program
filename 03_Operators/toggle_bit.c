/**
 * @file toggle_bit.c
 * @brief Demonstrates toggling a specific bit using XOR.
 *
 * This program toggles bit 2 of an integer using the bitwise XOR
 * and left shift operators.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Initializes an integer with the value 10.
 * - Creates a mask for bit 2.
 * - Toggles bit 2 using the XOR operator.
 * - Displays the resulting value.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Integer variable initialized with the value 10 */
    int a = 10;

    /* Toggle bit 2 */
    a = a ^ (1 << 2);

    printf("Value after toggling bit 2 is %d\n", a);

    return 0;
}