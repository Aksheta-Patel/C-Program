/**
 * @file nested_for.c
 * @brief Demonstrates a nested for loop.
 *
 * @details
 * The program uses an outer loop for rows and an inner loop
 * for columns to print a 3 x 3 star pattern.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Controls the rows. */
    int i;

    /** @brief Controls the columns. */
    int j;

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}