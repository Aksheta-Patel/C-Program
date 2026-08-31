/**
 * @file number_pattern.c
 * @brief Prints a continuous number pattern using nested for loops.
 *
 * @details
 * The program prints consecutive numbers in rows.
 * The number of columns increases with each row.
 *
 * Output:
 * 1
 * 23
 * 456
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The outer loop controls the rows.
 * The inner loop controls the columns.
 * The variable n is increased after every number is printed.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Controls the rows. */
    int i;

    /** @brief Controls the columns. */
    int j;

    /** @brief Stores the number to be printed. */
    int n = 1;

    /* Controls rows */
    for(i = 1; i <= 3; i++)
    {
        /* Controls columns */
        for(j = 1; j <= i; j++)
        {
            printf("%d", n);
            n++;
        }

        printf("\n");
    }

    return 0;
}