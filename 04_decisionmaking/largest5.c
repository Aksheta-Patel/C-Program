/**
 * @file largest_of_five.c
 * @brief Finds the largest of five integers.
 *
 * This program takes five integers from the user and determines
 * the largest number using if-else statements.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes five integers from the user.
 * - Compares the five integers.
 * - Displays the largest number.
 * - Handles equal values correctly.
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

    /** Stores the fourth integer */
    int d;

    /** Stores the fifth integer */
    int e;

    while (1)
    {
        printf("Enter five integers: ");

        if (scanf("%d %d %d %d %d", &a, &b, &c, &d, &e) == 5)
        {
            break;
        }

        printf("Invalid input. Please enter five integers again.\n");

        while (getchar() != '\n');
    }

    if (a >= b && a >= c && a >= d && a >= e)
    {
        printf("The largest number is %d.\n", a);
    }
    else if (b >= a && b >= c && b >= d && b >= e)
    {
        printf("The largest number is %d.\n", b);
    }
    else if (c >= a && c >= b && c >= d && c >= e)
    {
        printf("The largest number is %d.\n", c);
    }
    else if (d >= a && d >= b && d >= c && d >= e)
    {
        printf("The largest number is %d.\n", d);
    }
    else
    {
        printf("The largest number is %d.\n", e);
    }

    return 0;
}