/**
 * @file prime_numbers.c
 * @brief Prints all prime numbers from 2 to N.
 *
 * @details
 * The program checks every number from 2 to N.
 * A number is considered prime if it has no divisor other than
 * 1 and itself.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The outer loop selects each number from 2 to N.
 * The inner loop checks whether the selected number has a divisor.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Controls the numbers being checked. */
    int i;

    /** @brief Checks possible divisors. */
    int j;

    /** @brief Stores the upper limit. */
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
                break;
        }

        if(j == i)
            printf("%d ", i);
    }

    return 0;
}