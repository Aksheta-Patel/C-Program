/**
 * @file palindrome.c
 * @brief Checks whether an integer is a palindrome.
 *
 * This program takes an integer from the user, reverses its digits,
 * and compares the reversed number with the original number.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes an integer from the user.
 * - Stores a copy of the original number.
 * - Reverses the digits of the number.
 * - Compares the reversed number with the original number.
 * - Displays whether the number is a palindrome.
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

    /** Stores the reversed number */
    int result = 0;

    while (1)
    {
        printf("Enter an integer: ");

        if (scanf("%d", &n) == 1 && n >= 0)
        {
            break;
        }

        printf("Invalid input. Please enter a non-negative integer again.\n");

        while (getchar() != '\n');
    }

    q = n;

    while (q != 0)
    {
        r = q % 10;
        result = result * 10 + r;
        q = q / 10;
    }

    if (n == result)
    {
        printf("%d is a palindrome.\n", n);
    }
    else
    {
        printf("%d is not a palindrome.\n", n);
    }

    return 0;
}