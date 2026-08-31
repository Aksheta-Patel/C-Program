/**
 * @file quadrant.c
 * @brief Determines the quadrant or position of a point.
 *
 * This program takes the x-coordinate and y-coordinate of a point
 * and determines whether the point lies in one of the four quadrants,
 * on an axis, or at the origin.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes the x-coordinate and y-coordinate from the user.
 * - Checks the position of the point.
 * - Displays the corresponding quadrant, axis, or origin.
 * - Asks the user to enter again if the input is invalid.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the x-coordinate */
    int a;

    /** Stores the y-coordinate */
    int b;

    while (1)
    {
        printf("Enter the x and y coordinates: ");

        if (scanf("%d %d", &a, &b) == 2)
        {
            break;
        }

        printf("Invalid input. Please enter two integers again.\n");

        while (getchar() != '\n');
    }

    if (a > 0 && b > 0)
    {
        printf("The point lies in the 1st quadrant.\n");
    }
    else if (a < 0 && b > 0)
    {
        printf("The point lies in the 2nd quadrant.\n");
    }
    else if (a < 0 && b < 0)
    {
        printf("The point lies in the 3rd quadrant.\n");
    }
    else if (a > 0 && b < 0)
    {
        printf("The point lies in the 4th quadrant.\n");
    }
    else if (a == 0 && b == 0)
    {
        printf("The point lies at the origin.\n");
    }
    else
    {
        printf("The point lies on an axis.\n");
    }

    return 0;
}