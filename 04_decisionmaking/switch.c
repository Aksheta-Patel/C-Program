/**
 * @file food_choice.c
 * @brief Displays a food choice using switch-case.
 *
 * This program takes a choice from the user and displays
 * the corresponding food item.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes a choice from the user.
 * - Displays pizza for choice 1.
 * - Displays burger for choice 2.
 * - Asks the user to enter again if the choice is invalid.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the food choice entered by the user */
    int choice;

    while (1)
    {
        printf("Enter 1 for Pizza or 2 for Burger: ");

        if (scanf("%d", &choice) == 1 && (choice == 1 || choice == 2))
        {
            break;
        }

        printf("Invalid choice. Please enter 1 or 2 again.\n");

        while (getchar() != '\n');
    }

    switch (choice)
    {
        case 1:
            printf("The selected food is Pizza.\n");
            break;

        case 2:
            printf("The selected food is Burger.\n");
            break;
    }

    return 0;
}