/**
 * @file print_numbers.c
 * @brief Prints numbers from 1 to N.
 *
 * @details
 * The program takes a number N from the user and prints
 * all numbers from 1 up to N using a for loop.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The for loop starts from 1 and continues until i reaches N.
 * The value of i is increased by 1 after each iteration.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Stores the upper limit entered by the user. */
    int n;

    /** @brief Controls the loop from 1 to N. */
    int i;

    printf("Enter number\n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}