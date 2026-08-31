/**
 * @file alphabet_pattern.c
 * @brief Prints an alphabet pattern using nested loops.
 *
 * @details
 * The program prints the following pattern:
 *
 * a
 * ab
 * abc
 *
 * The outer loop controls the rows and the inner loop controls
 * the number of characters printed in each row.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The outer loop runs from 1 to 3 and controls the rows.
 * The inner loop prints characters from 'a' onwards.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Controls the rows of the pattern. */
    int i;

    /** @brief Controls the columns of the pattern. */
    int j;

    /** @brief Stores the current alphabet character. */
    char ch;

    /** @details Outer loop controls the number of rows. */
    for(i = 1; i <= 3; i++)
    {
        /** @details Start each row with the character 'a'. */
        ch = 'a';

        /** @details Inner loop controls the number of characters in each row. */
        for(j = 1; j <= i; j++)
        {
            printf("%c", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}