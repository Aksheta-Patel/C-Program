/**
 * @file double_value.c
 * @brief Demonstrates storing and printing a double value.
 *
 * This program stores a decimal value in a double variable
 * and prints the value using the appropriate format specifier.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Declares a double variable.
 * - Stores the value 67.80000000.
 * - Prints the stored value.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Double variable storing a decimal value */
    double age = 67.80000000;

    printf("%lg", age);

    return 0;
}