/**
 * @file swap_without_third_variable.c
 * @brief Swaps two integer values without using a third variable.
 *
 * This program swaps the values of two integers using addition
 * and subtraction without using an extra variable.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Initializes two integer values.
 * - Adds both values and stores the result in a.
 * - Subtracts b from a to get the original value of a.
 * - Subtracts the new b from a to get the original value of b.
 * - Displays the swapped values.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** First integer value */
    int a = 10;

    /** Second integer value */
    int b = 5;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Value of a after swapping is %d\n", a);
    printf("Value of b after swapping is %d\n", b);

    return 0;
}