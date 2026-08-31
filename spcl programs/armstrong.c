/**
 * @file armstrong.c
 * @brief Checks whether a number is an Armstrong number.
 *
 * This program takes a three-digit integer from the user and
 * checks whether the sum of the cubes of its digits is equal
 * to the original number.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes a three-digit integer from the user.
 * - Extracts each digit using the modulus operator.
 * - Calculates the sum of the cubes of the digits.
 * - Compares the result with the original number.
 * - Displays whether the number is an Armstrong number.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the original number */
    int n;

    /** Stores a copy of the original number */
    int q;

    /** Stores the last digit */
    int r;

    /** Stores the sum of cubes of the digits */
    int result = 0;

    while (1)
    {
        printf("Enter a three-digit integer: ");

        if (scanf("%d", &n) == 1 && n >= 100 && n <= 999)
        {
            break;
        }

        printf("Invalid input. Please enter a three-digit integer again.\n");

        while (getchar() != '\n');
    }

    q = n;

    while (n != 0)
    {
        r = n % 10;
        result = result + r * r * r;
        n = n / 10;
    }

    if (result == q)
        printf("%d is an Armstrong number.\n", q);
    else
        printf("%d is not an Armstrong number.\n", q);

    return 0;
}