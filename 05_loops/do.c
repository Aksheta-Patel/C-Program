/**
 * @file do_while_hello.c
 * @brief Demonstrates the use of a do-while loop.
 *
 * @details
 * The program prints "Hello" repeatedly using a do-while loop.
 * The loop starts with i = 1 and continues while i is less than 5.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The program:
 * - Initializes i to 1.
 * - Prints "Hello".
 * - Increments i.
 * - Repeats while i is less than 5.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Controls the number of loop iterations. */
    int i = 1;

    /** @details Executes the loop body at least once. */
    do
    {
        printf("Hello\n");
        i++;
    }
    while(i < 5);

    return 0;
}