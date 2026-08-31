/**
 * @file bitwise_operators.c
 * @brief Demonstrates basic bitwise operators.
 *
 * This program takes two integers from the user and demonstrates
 * AND, OR, XOR, NOT, left shift, and right shift operations.
 * The result of each operation is displayed in decimal and binary.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes two integers as input.
 * - Performs bitwise AND operation.
 * - Performs bitwise OR operation.
 * - Performs bitwise XOR operation.
 * - Performs bitwise NOT operation.
 * - Performs left shift operation.
 * - Performs right shift operation.
 * - Displays each result in decimal and binary form.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the first integer */
    int a;

    /** Stores the second integer */
    int b;

    /** Stores the result of each bitwise operation */
    int r;

    /** Controls the binary display loop */
    int i;

    while (1)
    {
        printf("Enter two integers: ");

        if (scanf("%d %d", &a, &b) == 2)
        {
            break;
        }

        printf("Invalid input. Please enter two integers again.\n");

        while (getchar() != '\n');
    }

    /* AND operation */
    r = a & b;
    printf("AND result is %d. Binary value is ", r);

    for (i = 7; i >= 0; i--)
        printf("%d", (r >> i) & 1);

    /* OR operation */
    r = a | b;
    printf("\nOR result is %d. Binary value is ", r);

    for (i = 7; i >= 0; i--)
        printf("%d", (r >> i) & 1);

    /* XOR operation */
    r = a ^ b;
    printf("\nXOR result is %d. Binary value is ", r);

    for (i = 7; i >= 0; i--)
        printf("%d", (r >> i) & 1);

    /* NOT operation */
    r = ~a;
    printf("\nNOT result of first integer is %d. Binary value is ", r);

    for (i = 7; i >= 0; i--)
        printf("%d", (r >> i) & 1);

    /* LEFT SHIFT operation */
    r = a << 1;
    printf("\nLeft shift result is %d. Binary value is ", r);

    for (i = 7; i >= 0; i--)
        printf("%d", (r >> i) & 1);

    /* RIGHT SHIFT operation */
    r = a >> 1;
    printf("\nRight shift result is %d. Binary value is ", r);

    for (i = 7; i >= 0; i--)
        printf("%d", (r >> i) & 1);

    printf("\n");

    return 0;
}