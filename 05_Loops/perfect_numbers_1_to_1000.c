/**
 * @file perfect_numbers.c
 * @brief Finds perfect numbers from 1 to 1000.
 *
 * @details
 * A perfect number is a number whose proper factors add up
 * to the number itself.
 *
 * Example:
 * 6 = 1 + 2 + 3
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The outer loop checks numbers from 1 to 1000.
 * The inner loop finds the proper factors of each number.
 * If the sum of the factors equals the number, it is printed.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Controls the numbers from 1 to 1000. */
    int i;

    /** @brief Controls the factors of each number. */
    int j;

    /** @brief Stores the sum of proper factors. */
    int sum;

    for(i = 1; i <= 1000; i++)
    {
        sum = 0;

        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                sum = sum + j;
            }
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}