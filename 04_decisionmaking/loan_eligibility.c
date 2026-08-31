/**
 * @file loan_approval.c
 * @brief Checks whether a person is eligible for a loan.
 *
 * This program takes the age and salary of a person and checks
 * whether they satisfy the given loan eligibility conditions.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes age and salary from the user.
 * - Checks whether the age is between 21 and 60.
 * - Checks whether the salary is greater than 25000.
 * - Displays whether the loan is approved or not.
 * - Asks the user to enter again if the input is invalid.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the age entered by the user */
    int age;

    /** Stores the salary entered by the user */
    int salary;

    while (1)
    {
        printf("Enter age and salary: ");

        if (scanf("%d %d", &age, &salary) == 2 && age >= 0 && salary >= 0)
        {
            break;
        }

        printf("Invalid input. Please enter a valid age and salary again.\n");

        while (getchar() != '\n');
    }

    if (age >= 21 && age <= 60)
    {
        if (salary > 25000)
        {
            printf("The loan is approved.\n");
        }
        else
        {
            printf("The loan is not approved.\n");
        }
    }
    else
    {
        printf("The loan is not approved.\n");
    }

    return 0;
}