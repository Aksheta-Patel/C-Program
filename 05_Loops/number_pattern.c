/**
 * @file number_pattern.c
 * @brief Prints an increasing number pattern using nested for loops.
 *
 * @details
 * The program prints numbers from 1 up to the current row number.
 *
 * Output:
 * 1
 * 12
 * 123
 * 1234
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The outer loop controls the rows.
 * The inner loop controls the columns and prints numbers
 * from 1 up to the current row number.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Controls the rows. */
    int i;

    /** @brief Controls the columns. */
    int j;

    /* Controls rows */
    for(i = 1; i <= 4; i++)
    {
        /* Controls columns */
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}