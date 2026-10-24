/**
 * @file arithmetic_assignment.c
 * @brief Demonstrates arithmetic compound assignment operators.
 *
 * This program demonstrates the use of +=, -=, *=, /=, and %=
 * operators on an integer variable.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Adds 1 to the value using +=.
 * - Subtracts 1 from the value using -=.
 * - Multiplies the value by 1 using *=.
 * - Divides the value by 1 using /=.
 * - Finds the remainder using %=.
 * - Displays the value after each operation.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Integer variable initialized with the value 10 */
    int a = 10;

    a += 1;
    printf("Value after addition assignment is %d\n", a);

    a -= 1;
    printf("Value after subtraction assignment is %d\n", a);

    a *= 1;
    printf("Value after multiplication assignment is %d\n", a);

    a /= 1;
    printf("Value after division assignment is %d\n", a);

    a %= 1;
    printf("Remainder after modulus assignment is %d\n", a);

    return 0;
}