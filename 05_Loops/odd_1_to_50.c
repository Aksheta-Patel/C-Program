#/**
 * @file odd_numbers.c
 * @brief Prints odd numbers from 1 to 50.
 *
 * @details
 * The program checks every number from 1 to 50.
 * If the remainder after division by 2 is not zero,
 * the number is printed as an odd number.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The program uses a for loop to check numbers from 1 to 50.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Controls the loop from 1 to 50. */
    int i;

    for(i = 1; i <= 50; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}