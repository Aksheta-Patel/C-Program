/**
 * @file grade_result.c
 * @brief Checks grade or pass/fail result using switch-case.
 *
 * This program allows the user to choose between checking a grade
 * and checking whether the student has passed or failed.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Displays two choices to the user.
 * - Takes the user's choice.
 * - Takes marks from the user.
 * - Checks the grade or result based on the selected choice.
 * - Asks the user to enter again if the input is invalid.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the user's choice */
    int choice;

    /** Stores the marks entered by the user */
    int marks;

    while (1)
    {
        printf("1. Check Grade\n");
        printf("2. Check Result\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) == 1 && choice >= 1 && choice <= 2)
        {
            break;
        }

        printf("Invalid choice. Please enter 1 or 2 again.\n");

        while (getchar() != '\n');
    }

    while (1)
    {
        printf("Enter marks between 0 and 100: ");

        if (scanf("%d", &marks) == 1 && marks >= 0 && marks <= 100)
        {
            break;
        }

        printf("Invalid marks. Please enter a value between 0 and 100 again.\n");

        while (getchar() != '\n');
    }

    switch (choice)
    {
        case 1:
            if (marks >= 60)
            {
                printf("The grade is A.\n");
            }
            else
            {
                printf("The grade is B.\n");
            }
            break;

        case 2:
            if (marks >= 35)
            {
                printf("The student has passed.\n");
            }
            else
            {
                printf("The student has failed.\n");
            }
            break;
    }

    return 0;
}