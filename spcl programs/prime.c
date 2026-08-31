/**
 * @file prime.c
 * @brief Checks whether an integer is a prime number.
 *
 * This program takes an integer from the user and checks whether
 * it has any divisor other than 1 and itself.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes an integer greater than or equal to 2 from the user.
 * - Checks whether the number is divisible by any number from 2 to n-1.
 * - Displays whether the number is prime or not prime.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the number entered by the user */
    int n;

    /** Controls the loop */
    int i;

    while (1)
    {
        printf("Enter an integer greater than or equal to 2: ");

        if (scanf("%d", &n) == 1 && n >= 2)
        {
            break;
        }

        printf("Invalid input. Please enter an integer greater than or equal to 2 again.\n");

        while (getchar() != '\n');
    }

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d is not a prime number.\n", n);
            return 0;
        }
    }

    printf("%d is a prime number.\n", n);

    return 0;
}