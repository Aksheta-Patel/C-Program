/**
 * @file traffic_light.c
 * @brief Displays the traffic instruction based on the light color.
 *
 * This program takes a traffic light character from the user and
 * displays Stop, Wait, or Go based on the entered character.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes a traffic light character from the user.
 * - Checks whether the character is R, Y, or G.
 * - Displays the corresponding traffic instruction.
 * - Asks the user to enter again if the input is invalid.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the traffic light character */
    char a;

    while (1)
    {
        printf("Enter traffic light (R, Y, or G): ");

        if (scanf(" %c", &a) == 1 &&
            (a == 'R' || a == 'Y' || a == 'G'))
        {
            break;
        }

        printf("Invalid traffic light. Please enter R, Y, or G again.\n");

        while (getchar() != '\n');
    }

    if (a == 'R')
    {
        printf("The instruction is Stop.\n");
    }
    else if (a == 'Y')
    {
        printf("The instruction is Wait.\n");
    }
    else
    {
        printf("The instruction is Go.\n");
    }

    return 0;
}