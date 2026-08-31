/**
 * @file fibonacci_series.c
 * @brief Prints the first n Fibonacci numbers.
 *
 * This program takes the number of terms from the user and
 * prints the Fibonacci series using a for loop.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes the number of Fibonacci terms from the user.
 * - Starts the series with 0 and 1.
 * - Calculates each next term by adding the previous two terms.
 * - Displays the Fibonacci series.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the number of terms */
    int n;

    /** Stores the first Fibonacci value */
    int a = 0;

    /** Stores the second Fibonacci value */
    int b = 1;

    /** Stores the next Fibonacci value */
    int c;

    /** Controls the for loop */
    int i;

    while (1)
    {
        printf("Enter the number of Fibonacci terms: ");

        if (scanf("%d", &n) == 1 && n > 0)
        {
            break;
        }

        printf("Invalid input. Please enter a positive integer again.\n");

        while (getchar() != '\n');
    }

    printf("Fibonacci series is: ");

    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}