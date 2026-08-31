/**
 * @file grade.c
 * @brief Assigns a grade based on marks.
 *
 * This program takes marks from the user and assigns a grade
 * according to the marks obtained.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes marks from the user.
 * - Checks that the marks are between 0 and 100.
 * - Assigns a grade based on the marks.
 * - Displays the grade.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the marks entered by the user */
    int grade;

    while (1)
    {
        printf("Enter marks between 0 and 100: ");

        if (scanf("%d", &grade) == 1 && grade >= 0 && grade <= 100)
        {
            break;
        }

        printf("Invalid marks. Please enter a value between 0 and 100 again.\n");

        while (getchar() != '\n');
    }

    if (grade >= 90)
    {
        printf("The grade is A.\n");
    }
    else if (grade >= 80)
    {
        printf("The grade is B.\n");
    }
    else if (grade >= 70)
    {
        printf("The grade is C.\n");
    }
    else
    {
        printf("The grade is D.\n");
    }

    return 0;
}