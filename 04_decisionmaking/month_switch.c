/**
 * @file month.c
 * @brief Displays the month name based on the month number.
 *
 * This program takes a month number from 1 to 12 from the user
 * and displays the corresponding month name.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes a month number from the user.
 * - Checks the month number using switch-case.
 * - Displays the corresponding month name.
 * - Asks the user to enter again if the input is invalid.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the month number entered by the user */
    int a;

    while (1)
    {
        printf("Enter a month number from 1 to 12: ");

        if (scanf("%d", &a) == 1 && a >= 1 && a <= 12)
        {
            break;
        }

        printf("Invalid month number. Please enter a number from 1 to 12 again.\n");

        while (getchar() != '\n');
    }

    switch (a)
    {
        case 1:
            printf("The month is January.\n");
            break;

        case 2:
            printf("The month is February.\n");
            break;

        case 3:
            printf("The month is March.\n");
            break;

        case 4:
            printf("The month is April.\n");
            break;

        case 5:
            printf("The month is May.\n");
            break;

        case 6:
            printf("The month is June.\n");
            break;

        case 7:
            printf("The month is July.\n");
            break;

        case 8:
            printf("The month is August.\n");
            break;

        case 9:
            printf("The month is September.\n");
            break;

        case 10:
            printf("The month is October.\n");
            break;

        case 11:
            printf("The month is November.\n");
            break;

        case 12:
            printf("The month is December.\n");
            break;
    }

    return 0;
}