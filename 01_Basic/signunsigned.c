 /**
 * @file signed_unsigned.c
 * @brief Demonstrates signed and unsigned integer variables.
 *
 * This program declares a signed integer and an unsigned integer
 * and prints their values using the appropriate format specifiers.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Declares a signed integer with value -5.
 * - Declares an unsigned integer with value 5.
 * - Prints both values.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Signed integer storing a negative value */
    signed int b = -5;

    /** Unsigned integer storing a positive value */
    unsigned int c = 5;

    printf("%d %u", b, c);

    return 0;
}