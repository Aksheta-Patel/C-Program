/**
 * @file triangle_pattern.c
 * @brief Prints a right-angled triangle star pattern.
 *
 * @details
 * The program uses nested for loops where the inner loop's execution 
 * depends on the outer loop's counter, printing an increasing number 
 * of stars per row.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The outer loop controls the rows (1 to 5).
 * The inner loop controls the columns, printing stars up to the current row number.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Controls the rows. */
    int i;

    /** @brief Controls the columns. */
    int j;

    /** 
     * @brief Outer loop to iterate through each of the 5 rows.
     */
    for(i = 1; i <= 5; i++)
    {
        /** 
         * @brief Inner loop to print stars equal to the current row number.
         */
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}