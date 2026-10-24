#/**
 * @file sum_skip_negative.c
 * @brief Calculates the sum of 6 non-negative numbers.
 *
 * @details
 * The program takes 6 numbers from the user.
 * If a negative number is entered, it is skipped using continue.
 * Only non-negative numbers are added to the sum.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The loop runs 6 times.
 * Negative numbers are skipped using continue.
 * Non-negative numbers are added to sum.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Stores the number entered by the user. */
    int n;

    /** @brief Controls the loop iterations. */
    int i;

    /** @brief Stores the sum of non-negative numbers. */
    int sum = 0;

    /** @details Takes 6 numbers from the user. */
    for(i = 1; i < 7; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &n);

        /** @details Skips negative numbers. */
        if(n < 0)
        {
            continue;
        }

        /** @details Adds non-negative numbers to the sum. */
        sum = sum + n;
    }

    printf("Sum = %d", sum);

    return 0;
}