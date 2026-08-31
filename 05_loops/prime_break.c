/**
 * @file first_prime.c
 * @brief Finds the first prime number greater than a given number.
 *
 * @details
 * The program starts checking from the number immediately greater
 * than the number entered by the user.
 *
 * Each number is checked for divisibility from 2 up to one less
 * than the number. If no divisor is found, the number is prime.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The program:
 * - Takes a number from the user.
 * - Starts checking from the next number.
 * - Uses a for loop to check whether the number is prime.
 * - Uses an infinite while loop to continue checking numbers
 *   until a prime number is found.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Stores the number being checked. */
    int n;

    /** @brief Controls the prime-checking loop. */
    int i;

    printf("Enter number: ");
    scanf("%d", &n);

    /* Start checking from the next number */
    n++;

    /** @details Continues until the first prime number is found. */
    while(1)
    {
        /** @details Checks whether n has any divisor other than 1 and itself. */
        for(i = 2; i < n; i++)
        {
            if(n % i == 0)
                break;
        }

        /** @details If no divisor was found, n is prime. */
        if(i == n)
        {
            printf("First prime = %d", n);
            break;
        }

        /** @details Move to the next number. */
        n++;
    }

    return 0;
}