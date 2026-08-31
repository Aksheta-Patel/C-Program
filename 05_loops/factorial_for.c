/**
 * @file factorial.c
 * @brief Calculates the factorial of a number using a loop.
 *
 * @details
 * The program takes a non-negative integer from the user and
 * calculates its factorial using an iterative for loop.
 *
 * Factorial of n is:
 * n! = 1 * 2 * 3 * ... * n
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The program:
 * - Takes a number from the user.
 * - Starts fact with 1.
 * - Multiplies fact by every number from 1 to n.
 * - Displays the factorial.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Stores the number whose factorial is calculated. */
    long int n;

    /** @brief Controls the factorial loop. */
    long int i;

    /** @brief Stores the calculated factorial. */
    long int fact = 1;

    printf("Enter a number: ");
    scanf("%ld", &n);

    if(n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        /** @details Multiplies all numbers from 1 to n. */
        for(i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        printf("Factorial = %ld\n", fact);
    }

    return 0;
}