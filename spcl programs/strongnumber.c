/**
 * @file strong_number.c
 * @brief Checks whether an integer is a Strong number.
 *
 * This program takes an integer from the user, finds the factorial
 * of each digit, and checks whether the sum of the factorials is
 * equal to the original number.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes a positive integer from the user.
 * - Extracts each digit of the integer.
 * - Finds the factorial of each digit.
 * - Adds all the factorials.
 * - Compares the sum with the original number.
 * - Displays whether the number is a Strong number.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the number entered by the user */
    int n;

    /** Stores a copy of the original number */
    int q;

    /** Stores the last digit */
    int r;

    /** Controls the factorial loop */
    int i;

    /** Stores the factorial of each digit */
    int factorial;

    /** Stores the sum of the factorials */
    int result = 0;

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

    q = n;

    while (n != 0)
    {
        r = n % 10;

        factorial = 1;

        for (i = 1; i <= r; i++)
        {
            factorial = factorial * i;
        }

        result = result + factorial;

        n = n / 10;
    }

    if (result == q)
        printf("%d is a Strong number.\n", q);
    else
        printf("%d is not a Strong number.\n", q);

    return 0;
}