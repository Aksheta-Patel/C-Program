/**
 * @file square_pattern.c
 * @brief Prints a 5 x 5 square star pattern.
 *
 * @details
 * The program uses nested for loops to print 5 rows,
 * with 5 stars in each row.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The outer loop controls the rows.
 * The inner loop controls the columns and prints stars.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Controls the rows. */
    int i;

    /** @brief Controls the columns. */
    int j;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}