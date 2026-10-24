/**
 * @file age.c
 * @brief Takes age as input and displays it.
 *
 * This program asks the user to enter their age and
 * displays the entered age.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes the user's age as input.
 * - Validates the age.
 * - Asks the user to re-enter if the age is invalid.
 * - Displays the valid age.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the user's age */
    int age;

    while (1)
    {
        printf("Enter your age: ");

        if (scanf("%d", &age) == 1 && age >= 0 && age <= 150)
        {
            break;
        }

        printf("Invalid age! Please enter again.\n");

        while (getchar() != '\n');
    }

    printf("Your age is %d\n", age);

    return 0;
}