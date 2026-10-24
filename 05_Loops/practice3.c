/**
 * @file sum_natural.c
 * @brief Finds the sum of the first n natural numbers.
 *
 * @details
 * The program uses a do-while loop to add numbers from 1 to n.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The program takes a positive number n and adds all numbers
 * from 1 to n using a do-while loop.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Stores the number entered by the user. */
    int n;

    /** @brief Controls the numbers being added. */
    int i = 1;

    /** @brief Stores the total sum. */
    int sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    /** @details Adds numbers from 1 to n. */
    do
    {
        sum = sum + i;
        i++;
    }
    while(i <= n);

    printf("%d", sum);

    return 0;
}