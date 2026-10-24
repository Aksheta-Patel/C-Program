/**
 * @file vowel.c
 * @brief Checks whether a lowercase alphabet is a vowel or consonant.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Takes a character from the user and checks whether it is
 * a vowel, consonant, or not an alphabet.
 *
 * @return 0 if the program runs successfully.
 */
int main()
{
    /** Stores the character entered by the user */
    char b;

    printf("Enter alphabet: ");
    scanf(" %c", &b);

    if(b >= 'a' && b <= 'z')
    {
        switch(b)
        {
            case 'a':
                printf("Vowel");
                break;

            case 'e':
                printf("Vowel");
                break;

            case 'i':
                printf("Vowel");
                break;

            case 'o':
                printf("Vowel");
                break;

            case 'u':
                printf("Vowel");
                break;

            default:
                printf("Consonant");
        }
    }
    else
    {
        printf("Not an alphabet");
    }

    return 0;
}