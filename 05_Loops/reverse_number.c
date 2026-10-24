/**
 * @file reverse_number.c
 * @brief Reverses an integer entered by the user.
 *
 * @details
 * The program takes an integer input, extracts its digits one by one 
 * using modulo and division operations within a for loop, and builds 
 * the reversed number.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * Prompts the user for a number, processes the digits to reverse their order,
 * and prints the resulting reversed number to the console.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Stores the original number entered by the user. */
    int n;

    /** @brief Stores the reversed number, initialized to 0. */
    int rev = 0;

    /** @brief Temporary variable used to process the number digit by digit. */
    int q;

    /** @brief Stores the remainder (the last digit of the current quotient). */
    int r;

    printf("enter the number\n");
    scanf("%d", &n);

    q = n;

    /** 
     * @brief Loop to extract digits and construct the reversed number.
     * @details Continues as long as the quotient is greater than 0, 
     * dividing by 10 in each iteration to strip the last digit.
     */
    for(; q > 0; q = q / 10)
    {
        r = q % 10;
        rev = rev * 10 + r;
    }

    printf("%d", rev);

    return 0;
}