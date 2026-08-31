/**
 * @file perfect_number.c
 * @brief Checks whether an integer is a perfect number.
 *
 * This program takes an integer from the user and finds the sum
 * of its proper divisors. It then checks whether the sum is equal
 * to the original number.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes a positive integer from the user.
 * - Finds all proper divisors of the integer.
 * - Calculates the sum of the proper divisors.
 * - Compares the sum with the original number.
 * - Displays whether the number is a perfect number.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the number entered by the user */
    int n;

    /** Controls the loop */
    int i;

    /** Stores the sum of proper divisors */
    int sum = 0;

    while (1)
    {
        printf("Enter a positive integer: ");

        if (scanf("%d", &n) == 1 && n > 0)
        {
            break;
        }

        printf("Invalid input. Please enter a positive integer again.\n");

        while (getchar() != '\n');
    }

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);

    return 0;
}