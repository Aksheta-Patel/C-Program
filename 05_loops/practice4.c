/**
 * @file even_numbers.c
 * @brief Prints even numbers from 1 to 20.
 *
 * @details
 * The program uses a for loop to check numbers from 1 to 20.
 * If a number is divisible by 2, it is printed.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The loop checks every number from 1 to 20.
 * The condition i % 2 == 0 checks whether the number is even.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Controls the loop from 1 to 20. */
    int i;

    for(i = 1; i <= 20; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}