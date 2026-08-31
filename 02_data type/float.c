/**
 * @file float_value.c
 * @brief Demonstrates storing and printing a float value.
 *
 * This program stores a decimal value in a float variable
 * and prints the stored value using the %f format specifier.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Declares a float variable.
 * - Stores the value 67.8.
 * - Prints the stored value.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Float variable storing a decimal value */
    float age = 67.8;

    printf("%f", age);

    return 0;
}