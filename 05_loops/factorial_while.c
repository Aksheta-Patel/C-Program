/**
 * @file factorial_while.c
 * @brief Calculates the factorial of a number using a while loop.
 *
 * @details
 * The program takes a non-negative integer from the user and
 * calculates its factorial using a while loop.
 *
 * Factorial of n:
 * n! = 1 * 2 * 3 * ... * n
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The program:
 * - Takes a number from the user.
 * - Starts i and fact with 1.
 * - Multiplies fact by i.
 * - Increments i.
 * - Repeats until i becomes greater than n.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Stores the number whose factorial is calculated. */
    int n;

    /** @brief Controls the while loop. */
    int i = 1;

    /** @brief Stores the calculated factorial. */
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        /** @details Multiplies the numbers from 1 to n. */
        while(i <= n)
        {
            fact = fact * i;
            i++;
        }

        printf("Factorial = %d\n", fact);
    }

    return 0;
}