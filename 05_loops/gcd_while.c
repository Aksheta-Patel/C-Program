/**
 * @file gcd.c
 * @brief Finds the GCD of two positive integers.
 *
 * @details
 * This program uses the Euclidean algorithm to find the
 * Greatest Common Divisor (GCD) of two positive integers.
 *
 * The Euclidean algorithm repeatedly calculates:
 *
 * r = a % b
 * a = b
 * b = r
 *
 * The process continues until b becomes 0.
 * At that point, a contains the GCD.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The program:
 * - Takes two positive integers from the user.
 * - Validates that both numbers are positive.
 * - Uses the Euclidean algorithm to find their GCD.
 * - Displays the GCD.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Stores the first positive integer. */
    int a;

    /** @brief Stores the second positive integer. */
    int b;

    /** @brief Stores the remainder during the GCD calculation. */
    int r;

    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);

    /** @details Repeats input until both numbers are positive. */
    while(a <= 0 || b <= 0)
    {
        printf("Invalid input. Enter two positive numbers again: ");
        scanf("%d %d", &a, &b);
    }

    /** @details Finds the GCD using the Euclidean algorithm. */
    while(b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    printf("GCD = %d\n", a);

    return 0;
}