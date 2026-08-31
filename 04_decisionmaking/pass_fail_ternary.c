/**
 * @file largest_of_three.c
 * @brief Finds the largest of three integers using nested ternary operators.
 *
 * This program takes three integers from the user and uses nested
 * ternary operators to find the largest value.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes three integers from the user.
 * - Compares the integers using nested ternary operators.
 * - Stores the largest value in result.
 * - Displays the largest value.
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

    /** Stores the largest value */
    int result;

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

    result = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The largest value is %d.\n", result);

    return 0;
}