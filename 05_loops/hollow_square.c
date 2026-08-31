/**
 * @file hollow_square.c
 * @brief Prints a hollow square star pattern.
 *
 * @details
 * The program uses nested for loops to print a 5 x 5 hollow square.
 * Stars are printed only on the boundary of the square, while spaces
 * are printed inside the square.
 *
 * Output:
 *
 * * * * * 
 * *       *
 * *       *
 * *       *
 * * * * *
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The outer loop controls the rows and the inner loop controls
 * the columns. The if condition checks whether the current
 * position is on the boundary of the square.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Controls the rows of the square. */
    int i;

    /** @brief Controls the columns of the square. */
    int j;

    /** @details Controls the 5 rows of the square. */
    for(i = 1; i <= 5; i++)
    {
        /** @details Controls the 5 columns of each row. */
        for(j = 1; j <= 5; j++)
        {
            /** @details Prints a star when the position is on the boundary. */
            if(i == 1 || i == 5 || j == 1 || j == 5)
            {
                printf("* ");
            }
            else
            {
                /** @details Prints spaces for the inside of the square. */
                printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}