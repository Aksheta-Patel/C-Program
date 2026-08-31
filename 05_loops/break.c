/**
 * @file sum_until_negative.c
 * @brief Calculates the sum of up to 6 numbers.
 *
 * @details
 * The program asks the user to enter 6 numbers.
 * If a negative number is entered, the loop stops immediately.
 * Only non-negative numbers are added to the sum.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The loop runs a maximum of 6 times.
 * A negative number causes the loop to stop using break.
 * Otherwise, the entered number is added to sum.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Stores the number entered by the user. */
    int n;

    /** @brief Controls the number of loop iterations. */
    int i;

    /** @brief Stores the sum of non-negative numbers. */
    int sum = 0;

    /** @details Takes a maximum of 6 numbers. */
    for(i = 1; i < 7; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &n);

        /** @details Stops the loop when a negative number is entered. */
        if(n < 0)
        {
            break;
        }

        /** @details Adds the positive or zero value to the sum. */
        sum = sum + n;
    }

    printf("Sum = %d", sum);

    return 0;
}