/**
 * @file bitwise_assignment.c
 * @brief Demonstrates bitwise compound assignment operators.
 *
 * This program demonstrates the use of &, |, ^, <<, and >> operators
 * with compound assignment.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Performs bitwise AND assignment using &=.
 * - Performs bitwise OR assignment using |=.
 * - Performs bitwise XOR assignment using ^=.
 * - Performs left shift assignment using <<=.
 * - Performs right shift assignment using >>=.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Integer variable initialized with the value 10 */
    int a = 10;

    a &= 1;
    printf("Value after bitwise AND assignment is %d\n", a);

    a |= 1;
    printf("Value after bitwise OR assignment is %d\n", a);

    a ^= 1;
    printf("Value after bitwise XOR assignment is %d\n", a);

    a <<= 1;
    printf("Value after left shift assignment is %d\n", a);

    a >>= 1;
    printf("Value after right shift assignment is %d\n", a);

    return 0;
}