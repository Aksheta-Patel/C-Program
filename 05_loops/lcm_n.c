/**
 * @file lcm_n_numbers.c
 * @brief Finds the LCM of N numbers.
 *
 * @details
 * The program takes N numbers and finds their Least Common Multiple (LCM).
 * It starts with the first number as the LCM and repeatedly adds that
 * original number until the current LCM is divisible by the next number.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The program:
 * - Takes the number of values.
 * - Takes the first number and stores it as the initial LCM.
 * - Takes the remaining numbers one by one.
 * - Adds the first number to the LCM until it is divisible by
 *   the current number.
 * - Displays the final LCM.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Stores how many numbers are entered. */
    int n;

    /** @brief Controls the loop. */
    int i;

    /** @brief Stores the current number. */
    int a;

    /** @brief Stores the original first number. */
    int first;

    /** @brief Stores the current LCM. */
    int lcm;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter first number: ");
    scanf("%d", &first);

    lcm = first;

    for(i = 2; i <= n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &a);

        while(lcm % a != 0)
        {
            lcm = lcm + first;
        }
    }

    printf("LCM = %d", lcm);

    return 0;
}