/**
 * @file count_digits.c
 * @brief Counts the number of digits in an integer.
 *
 * @details
 * The program takes an integer from the user and counts its digits
 * by repeatedly dividing the number by 10.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The program:
 * - Takes a number from the user.
 * - Stores a copy of the number in q.
 * - Divides q by 10 repeatedly.
 * - Increments count for each division.
 * - Displays the number of digits.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Stores the number entered by the user. */
    int n;

    /** @brief Stores the number of digits. */
    int count = 0;

    /** @brief Temporary copy of the original number. */
    int q;

    printf("Enter the number: ");
    scanf("%d", &n);

    q = n;

    /** @details Removes one digit from q in every iteration. */
    while(q != 0)
    {
        q = q / 10;
        count++;
    }

    printf("Number of digits = %d\n", count);

    return 0;
}