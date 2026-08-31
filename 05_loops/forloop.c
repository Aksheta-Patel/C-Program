/**
 * @file comma_for.c
 * @brief Demonstrates the comma operator in a for loop.
 *
 * @details
 * The program uses two variables, i and j, in a for loop.
 * The comma operator in the condition makes the last expression
 * the value of the condition.
 */

#include <stdio.h>

/** @brief Controls the first part of the loop. */
int i;

/** @brief Controls the second part of the loop. */
int j;

/**
 * @brief Main function of the program.
 *
 * @details
 * The loop initializes i and j to 0, increments both variables,
 * and uses the comma operator in the condition.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    for(i = 0, j = 0; i < 5, j < 2; i++, j++)
    {
        printf("Hello ");
    }

    return 0;
}