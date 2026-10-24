/**
 * @file compound_assignment.c
 * @brief Demonstrates compound assignment operators.
 *
 * This program uses a global integer variable and demonstrates
 * the +=, -=, and *= compound assignment operators.
 */

#include <stdio.h>

/** Global integer variable initialized to 0 */
int a = 0;

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Adds 5 to the value of a.
 * - Subtracts 4 from the updated value of a.
 * - Multiplies the updated value of a by 3.
 * - Displays the value after each operation.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    printf("Value after adding 5 is %d\n", a += 5);

    printf("Value after subtracting 4 is %d\n", a -= 4);

    printf("Value after multiplying by 3 is %d\n", a *= 3);

    return 0;
}