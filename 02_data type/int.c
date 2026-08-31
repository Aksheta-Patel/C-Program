/**
 * @file age.c
 * @brief Demonstrates declaring and printing an integer variable.
 *
 * This program stores an integer value in a variable
 * and prints the value.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Declares an integer variable.
 * - Stores the value 60.
 * - Prints the stored value.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Integer variable storing the age */
    int age = 60;

    printf("%d\n", age);

    return 0;
}