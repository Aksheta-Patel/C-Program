/**
 * @file count_set_bits.c
 * @brief Counts the number of set bits in an integer.
 *
 * This program takes a positive integer from the user and counts
 * the number of 1s in its binary representation using bitwise
 * AND and right shift operators.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes a positive integer from the user.
 * - Checks the last bit using the bitwise AND operator.
 * - Counts the set bits.
 * - Right shifts the value to check the next bit.
 * - Displays the total number of set bits.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the integer entered by the user */
    int a;

    /** Stores the number of set bits */
    int c = 0;

    while (1)
    {
        printf("Enter a positive integer: ");

        if (scanf("%d", &a) == 1 && a > 0)
        {
            break;
        }

        printf("Invalid input. Please enter a positive integer again.\n");

        while (getchar() != '\n');
    }

    while (a > 0)
    {
        c = c + (a & 1);
        a = a >> 1;
    }

    printf("Number of set bits is %d\n", c);

    return 0;
}