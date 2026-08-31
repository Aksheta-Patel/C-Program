/**
 * @file print_numbers.c
 * @brief Prints numbers from 0 to N.
 *
 * @details
 * The program takes a number N from the user and prints
 * all numbers starting from 0 up to N using a while loop.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The while loop continues as long as i is less than or
 * equal to n. The value of i is increased by 1 after
 * every iteration.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Stores the upper limit entered by the user. */
    int n;

    /** @brief Controls the loop starting from 0. */
    int i = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    while(i <= n)
    {
        printf("%d ", i);
        i++;
    }

    return 0;
}