/**
 * @file multiplication_table.c
 * @brief Prints multiplication tables from 1 to 10 in matrix form.
 *
 * @details
 * The program uses nested for loops.
 * The outer loop controls the numbers from 1 to 10.
 * The inner loop multiplies each number by 1 to 10.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The outer loop controls the rows and the inner loop controls
 * the columns of the multiplication table.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Controls the rows from 1 to 10. */
    int i;

    /** @brief Controls the columns from 1 to 10. */
    int j;

    /** @details Creates rows for numbers 1 to 10. */
    for(i = 1; i <= 10; i++)
    {
        /** @details Multiplies i by numbers from 1 to 10. */
        for(j = 1; j <= 10; j++)
        {
            printf("%d\t", i * j);
        }

        printf("\n");
    }

    return 0;
}