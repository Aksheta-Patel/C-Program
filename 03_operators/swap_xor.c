/**
 * @file xor_swap.c
 * @brief Swaps two integer values using the XOR operator.
 *
 * This program swaps two integer values without using a third
 * variable by using the bitwise XOR operator.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Initializes two integer values.
 * - Uses XOR operations to swap the values.
 * - Displays the swapped values.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** First integer value */
    int a = 15;

    /** Second integer value */
    int b = 10;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("Value of a after swapping is %d\n", a);
    printf("Value of b after swapping is %d\n", b);

    return 0;
}