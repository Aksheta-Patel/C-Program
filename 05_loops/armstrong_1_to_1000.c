/**
 * @file armstrong_numbers.c
 * @brief Finds Armstrong numbers from 0 to 1000.
 *
 * @details
 * An Armstrong number is a number whose sum of the cubes of its
 * digits is equal to the original number.
 *
 * For example:
 * 153 = 1^3 + 5^3 + 3^3
 *     = 1 + 125 + 27
 *     = 153
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The program checks every number from 0 to 1000.
 * For each number, its digits are separated using the modulus
 * and division operators. The cube of each digit is added to
 * result. If result is equal to the original number, the number
 * is printed as an Armstrong number.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Controls the numbers from 0 to 1000. */
    int i;

    /** @brief Stores the current number. */
    int n;

    /** @brief Stores the original number. */
    int q;

    /** @brief Stores the last digit of the number. */
    int r;

    /** @brief Stores the sum of cubes of the digits. */
    int result;

    /** @details Checks every number from 0 to 1000. */
    for(i = 0; i <= 1000; i++)
    {
        n = i;
        q = n;
        result = 0;

        /** @details Separates digits and adds their cubes. */
        while(n != 0)
        {
            r = n % 10;
            result = result + r * r * r;
            n = n / 10;
        }

        /** @details Checks whether the number is an Armstrong number. */
        if(result == q)
        {
            printf("%d\n", q);
        }
    }

    return 0;
}