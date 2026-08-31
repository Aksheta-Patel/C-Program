/**
 * @file vowel_consonant.c
 * @brief Checks whether an alphabet is a vowel or consonant.
 *
 * This program takes an alphabet from the user and checks whether
 * it is a vowel or consonant.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes an alphabet from the user.
 * - Checks whether the alphabet is a vowel.
 * - Displays whether the alphabet is a vowel or consonant.
 * - Asks the user to enter the alphabet again if the input is invalid.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the alphabet entered by the user */
    char n;

    while (1)
    {
        printf("Enter an alphabet: ");

        if (scanf(" %c", &n) == 1 &&
            ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z')))
        {
            break;
        }

        printf("Invalid input. Please enter an alphabet again.\n");

        while (getchar() != '\n');
    }

    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' ||
        n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U')
    {
        printf("The entered alphabet is a vowel.\n");
    }
    else
    {
        printf("The entered alphabet is a consonant.\n");
    }

    return 0;
}