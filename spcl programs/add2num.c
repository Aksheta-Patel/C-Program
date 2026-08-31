/**
 * @file addition_using_loop.c
 * @brief Adds two integers using a for loop.
 *
 * This program takes two integers from the user and adds the
 * second integer to the first integer using repeated increment.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes two integers from the user.
 * - Repeatedly increments the first integer.
 * - Performs the increment according to the value of the second integer.
 * - Displays the final result.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Controls the for loop */
    int i;

    /** Stores the first integer */
    int a;

    /** Stores the number of times a is incremented */
    int b;

    while (1)
    {
        printf("Enter two integers: ");

        if (scanf("%d %d", &a, &b) == 2 && b >= 0)
        {
            break;
        }

        printf("Invalid input. Please enter two integers, with the second value non-negative.\n");

        while (getchar() != '\n');
    }

    for (i = 1; i <= b; i++)
    {
        a++;
    }

    printf("Sum of the two numbers is %d\n", a);

    return 0;
}