/**
 * @file while_loop_counter.c
 * @brief Demonstrates a basic while loop to print numbers sequentially.
 *
 * @details
 * The program initializes a counter variable and uses a while loop 
 * to print numbers from 1 up to 4, incrementing the counter in each iteration.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * Initializes a loop variable and prints its value while it is less than 5,
 * incrementing it each time.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Loop counter initialized to 1. */
    int i = 1;

    /** 
     * @brief Loop that continues as long as i is less than 5.
     */
    while(i < 5)
    {
        printf("%d", i);
        i++;
    }

    return 0;
}