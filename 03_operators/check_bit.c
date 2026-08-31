/**
 * @file bit_check.c
 * @brief Demonstrates checking the least significant bit.
 *
 * This program checks bit 0 of an integer using the bitwise AND
 * and left shift operators.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Initializes an integer with the value 10.
 * - Creates a mask for bit 0.
 * - Performs a bitwise AND operation.
 * - Stores the result in the same variable.
 * - Displays the result.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Integer variable initialized with the value 10 */
    int a = 10;

    /** Checks bit 0 and stores the result in a */
    a = a & (1 << 0);

    printf("Value after checking bit 0 is %d\n", a);

    return 0;
}