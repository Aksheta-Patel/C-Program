/**
 * @file password_login.c
 * @brief Implements a simple password login system.
 *
 * @details
 * The program allows the user a maximum of 3 attempts to enter
 * the correct password. If the correct password is entered,
 * the program displays a success message and stops using break.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The program:
 * - Allows a maximum of 3 password attempts.
 * - Checks whether the entered password is correct.
 * - Displays a success message for the correct password.
 * - Uses break to stop the loop after successful login.
 * - Displays a wrong password message for incorrect attempts.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Counts the number of password attempts. */
    int n;

    /** @brief Stores the password entered by the user. */
    int pass;

    /** @details Allows the user a maximum of 3 attempts. */
    for(n = 1; n <= 3; n++)
    {
        printf("Enter password: ");
        scanf("%d", &pass);

        /** @details Checks whether the entered password is correct. */
        if(pass == 7777)
        {
            printf("Login successful\n");
            break;
        }
        else
        {
            printf("Wrong password\n");
        }
    }

    return 0;
}