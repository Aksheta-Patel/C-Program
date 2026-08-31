/**
 * @file largest_of_three.c
 * @brief Finds the largest of three integers.
 *
 * This program takes three integers from the user and uses nested
 * if-else statements to determine the largest value.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes three integers from the user.
 * - Compares the three integers using nested if-else statements.
 * - Displays the largest number.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the first integer */
    int a;

    /** Stores the second integer */
    int b;

    /** Stores the third integer */
    int c;

    while (1)
    {
        printf("Enter three integers: ");

        if (scanf("%d %d %d", &a, &b, &c) == 3)
        {
            break;
        }

        printf("Invalid input. Please enter three integers again.\n");

        while (getchar() != '\n');
    }

    if (a >= b)
    {
        if (a >= c)
        {
            printf("The largest number is %d.\n", a);
        }
        else
        {
            printf("The largest number is %d.\n", c);
        }
    }
    else
    {
        if (b >= c)
        {
            printf("The largest number is %d.\n", b);
        }
        else
        {
            printf("The largest number is %d.\n", c);
        }
    }

    return 0;
}