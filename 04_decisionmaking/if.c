/**
 * @file age_check.c
 * @brief Checks whether a person is an adult.
 *
 * This program takes the age of a person from the user and checks
 * whether the person is 18 years old or older.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes the age from the user.
 * - Validates that the age is non-negative.
 * - Checks whether the age is 18 or above.
 * - Displays whether the person is an adult or not.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the age entered by the user */
    int age;

    while (1)
    {
        printf("Enter your age: ");

        if (scanf("%d", &age) == 1 && age >= 0)
        {
            break;
        }

        printf("Invalid age. Please enter a non-negative age again.\n");

        while (getchar() != '\n');
    }

    if (age >= 18)
    {
        printf("The person is an adult.\n");
    }
    else
    {
        printf("The person is not an adult.\n");
    }

    return 0;
}