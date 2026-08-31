/**
 * @file smallest_ternary.c
 * @brief Finds the smaller of two integers using the ternary operator.
 *
 * This program compares two integers and stores the smaller value
 * using the ternary operator.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Initializes two integer values.
 * - Compares the two values using the ternary operator.
 * - Stores the smaller value in result.
 * - Displays the smaller value.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** First integer value */
    int a = 10;

    /** Second integer value */
    int b = 5;

    /** Stores the smaller value */
    int result;

    result = (a < b) ? a : b;

    printf("The smaller value is %d\n", result);

    return 0;
}