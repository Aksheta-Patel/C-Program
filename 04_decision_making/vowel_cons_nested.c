/**
 * @file vowel_consonant.c
 * @brief Checks whether a character is a vowel or consonant.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Takes a character from the user and checks whether it is
 * an uppercase or lowercase vowel, consonant, or not an alphabet.
 *
 * @return 0 if the program runs successfully.
 */
int main()
{
    /** Stores the character entered by the user */
    char a;

    printf("Enter a character: ");
    scanf(" %c", &a);

    if(a >= 'A' && a <= 'Z')
    {
        if(a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonant");
        }
    }
    else if(a >= 'a' && a <= 'z')
    {
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonant");
        }
    }
    else
    {
        printf("Not an alphabet");
    }

    return 0;
}