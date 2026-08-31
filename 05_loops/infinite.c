/**
 * @file infinite_loops.c
 * @brief Demonstrates different ways to create an infinite loop.
 *
 * @details
 * The program demonstrates three types of infinite loops:
 *
 * 1. for(;;)
 * 2. while(1)
 * 3. do-while(1)
 *
 * However, the first loop never ends, so the program never reaches
 * the second and third loops.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The first for loop runs infinitely because it has no condition.
 * Since there is no break statement, the program never reaches
 * the while loop or do-while loop.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /**
     * @brief Infinite for loop.
     *
     * @details
     * All three parts of the for loop are empty, so the loop
     * continues forever.
     */
    for(;;)
    {
        printf("Hello\n");
    }

    /**
     * @brief Infinite while loop.
     *
     * @details
     * The condition 1 is always true.
     * This loop will not be reached because the previous loop
     * is infinite.
     */
    while(1)
    {
        printf("Hello\n");
    }

    /**
     * @brief Infinite do-while loop.
     *
     * @details
     * The condition 1 is always true.
     * This loop will also not be reached.
     */
    do
    {
        printf("Hello\n");
    }
    while(1);

    return 0;
}