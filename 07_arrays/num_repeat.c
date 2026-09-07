/**
 * @file duplicate_digit.c
 * @brief Checks whether a digit appears more than once in a number.
 *
 * @details
 * The program takes an integer from the user and checks each digit.
 * An array is used to remember which digits have already appeared.
 * The program also checks whether the user entered a valid integer.
 *

 */

#include <stdio.h>

/**
 * @brief Checks for duplicate digits in a number.
 *
 * @return 0 if the program finishes successfully.
 */
int main()
{
    int n, digit;
    int a[10] = {0};

    /**
     * @brief Takes an integer from the user.
     */
    printf("Enter a number: ");
    scanf("%d", &n);

    /**
     * @brief Checks each digit of the number.
     */
    while(n != 0)
    {
        digit = n % 10;

        /**
         * @brief Checks whether the digit appeared before.
         */
        if(a[digit] == 1)
        {
            printf("Duplicate digit\n");
            return 0;
        }

        /**
         * @brief Marks the digit as already found.
         */
        a[digit] = 1;

        /**
         * @brief Removes the last digit from the number.
         */
        n = n / 10;
    }

    printf("No duplicate digit\n");

    return 0;
}
