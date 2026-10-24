/**
 * @file logical_operators.c
 * @brief Demonstrates the use of logical AND and OR operators.
 *
 * This program uses two integer variables and checks conditions
 * using the logical AND (&&) and logical OR (||) operators.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Initializes two integer values.
 * - Checks two conditions using the logical AND operator.
 * - Checks another condition using the logical OR operator.
 * - Displays the result of the conditions.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** First integer value */
    int a = 0;

    /** Second integer value */
    int b = 1;

    if (a > b && a == 0)
    {
        printf("The condition for a is true.\n");
    }
    else if (b == 1 || b < 0)
    {
        printf("The condition for b is true.\n");
    }
    else
    {
        printf("Both conditions are false.\n");
    }

    return 0;
}