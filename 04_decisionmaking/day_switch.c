/**
 * @file day_of_week_switch.c
 * @brief Displays the day of the week using switch-case.
 *
 * This program takes a number from 1 to 7 from the user and
 * displays the corresponding day of the week.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes a number from the user.
 * - Uses switch-case to identify the day.
 * - Displays the corresponding day of the week.
 * - Asks the user to enter again if the input is invalid.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the day number entered by the user */
    int choice;

    while (1)
    {
        printf("Enter a number from 1 to 7: ");

        if (scanf("%d", &choice) == 1 && choice >= 1 && choice <= 7)
        {
            break;
        }

        printf("Invalid input. Please enter a number from 1 to 7 again.\n");

        while (getchar() != '\n');
    }

    switch (choice)
    {
        case 1:
            printf("The day is Monday.\n");
            break;

        case 2:
            printf("The day is Tuesday.\n");
            break;

        case 3:
            printf("The day is Wednesday.\n");
            break;

        case 4:
            printf("The day is Thursday.\n");
            break;

        case 5:
            printf("The day is Friday.\n");
            break;

        case 6:
            printf("The day is Saturday.\n");
            break;

        case 7:
            printf("The day is Sunday.\n");
            break;
    }

    return 0;
}