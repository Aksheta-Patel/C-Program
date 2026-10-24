/**
 * @file increment.c
 * @brief Demonstrates the increment operator.
 *
 * This program demonstrates how the increment operator (++)
 * increases the value of an integer by 1.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Initializes an integer with the value 5.
 * - Displays its initial value.
 * - Increments the value by 1 twice.
 * - Displays the final value.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Integer variable initialized with the value 5 */
    int a = 5;

    printf("Initial value is %d\n", a);

    a++;
    a++;

    printf("Value after two increments is %d\n", a);

    return 0;
}