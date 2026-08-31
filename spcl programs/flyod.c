/**
 * @file number_triangle.c
 * @brief Prints a continuous number triangle.
 *
 * This program takes the number of rows from the user and prints
 * a triangle of continuously increasing numbers.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes the number of rows from the user.
 * - Uses nested for loops to create the triangle.
 * - Prints continuously increasing numbers in each row.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the number of rows */
    int rows;

    /** Controls the outer loop */
    int i;

    /** Controls the inner loop */
    int j;

    /** Stores the number to be printed */
    int n = 1;

    while (1)
    {
        printf("Enter the number of rows: ");

        if (scanf("%d", &rows) == 1 && rows > 0)
        {
            break;
        }

        printf("Invalid input. Please enter a positive integer again.\n");

        while (getchar() != '\n');
    }

    printf("Number triangle is:\n");

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", n);
            n++;
        }

        printf("\n");
    }

    return 0;
}