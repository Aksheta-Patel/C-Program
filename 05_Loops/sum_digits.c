/**
 * @file sum_of_digits.c
 * @brief Calculates the sum of digits of an integer entered by the user.
 *
 * @details
 * The program takes an integer input, extracts its digits one by one 
 * using modulo and division operations within a while loop, and accumulates 
 * their sum.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * Prompts the user for a number, processes the digits to add them together,
 * and prints the resulting sum to the console.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Stores the original number entered by the user. */
    int n;

    /** @brief Stores the accumulated sum of the digits, initialized to 0. */
    int result = 0;

    /** @brief Temporary variable used to process the number digit by digit. */
    int q;

    /** @brief Stores the remainder (the last digit of the current quotient). */
    int r;

    printf("enter the number\n");
    scanf("%d", &n);

    q = n;

    /** 
     * @brief Loop to extract digits and accumulate their sum.
     * @details Continues as long as the quotient is not equal to 0, 
     * dividing by 10 in each iteration to strip the last digit.
     */
    while(q != 0)
    {
        r = q % 10;
        result = result + r;
        q = q / 10;
    }

    printf("%d", result);

    return 0;
}