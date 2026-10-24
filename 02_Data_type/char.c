/**
 * @file gender.c
 * @brief Demonstrates storing and printing a character value.
 *
 * This program stores a gender character in a character variable
 * and prints the stored character.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Declares a character variable.
 * - Stores the character 'f'.
 * - Prints the stored character.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Character variable storing the gender */
    char gender = 'f';

    printf("%c", gender);

    return 0;
}