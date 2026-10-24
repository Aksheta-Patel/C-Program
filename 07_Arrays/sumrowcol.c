#include <stdio.h>

/**
 * @file sumrowcol.c
 * @brief Finds the sum of each row and each column of a 2D array.
 *
 * The program uses a 2x2 array and calculates:
 * - Sum of each row
 * - Sum of each column
 *
 * @details
 * For row sum, the row index i is fixed and j changes.
 * For column sum, the column index j is fixed and i changes.
 */

/**
 * @brief Main function of the program.
 *
 * @return 0 Program executed successfully.
 */
int main()
{
    int arr[2][2] = {{1, 2}, {3, 4}};
    int i, j;
    int sum = 0;

    /* Row sum */
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            sum = sum + arr[i][j];
        }

        printf("%d\n", sum);
        sum = 0;
    }

    /* Column sum */
    for(j = 0; j < 2; j++)
    {
        for(i = 0; i < 2; i++)
        {
            sum = sum + arr[i][j];
        }

        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}

