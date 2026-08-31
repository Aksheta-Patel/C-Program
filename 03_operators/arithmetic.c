/**
 * @file arithmetic_operations.c
 * @brief Demonstrates basic arithmetic operations.
 *
 * This program performs addition, subtraction, multiplication,
 * division, and modulus operations using two integer variables.
 */

#include <stdio.h>

/** First integer value */
int a = 15;

/** Second integer value */
int b = 10;

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Performs addition of two integers.
 * - Performs subtraction of two integers.
 * - Performs multiplication of two integers.
 * - Performs integer division of two integers.
 * - Finds the remainder using the modulus operator.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    printf("Sum of %d and %d is %d\n", a, b, a + b);
    printf("Difference between %d and %d is %d\n", a, b, a - b);
    printf("Product of %d and %d is %d\n", a, b, a * b);
    printf("Division of %d by %d is %d\n", a, b, a / b);
    printf("Remainder when %d is divided by %d is %d\n", a, b, a % b);

    return 0;
}