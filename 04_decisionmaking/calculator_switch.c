/**
 * @file calculator.c
 * @brief Performs arithmetic operations using switch-case.
 *
 * This program takes two integers from the user and performs
 * addition, subtraction, multiplication, or division based
 * on the selected choice.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Takes two integers from the user.
 * - Takes an operation choice from the user.
 * - Performs the selected arithmetic operation.
 * - Checks for division by zero.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the first integer */
    int a;

    /** Stores the second integer */
    int b;

    /** Stores the operation choice */
    int choice;

    while (1)
    {
        printf("Enter two integers: ");

        if (scanf("%d %d", &a, &b) == 2)
        {
            break;
        }

        printf("Invalid input. Please enter two integers again.\n");

        while (getchar() != '\n');
    }

    while (1)
    {
        printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division: ");

        if (scanf("%d", &choice) == 1 && choice >= 1 && choice <= 4)
        {
            break;
        }

        printf("Invalid choice. Please enter 1, 2, 3, or 4 again.\n");

        while (getchar() != '\n');
    }

    switch (choice)
    {
        case 1:
            printf("The sum is %d.\n", a + b);
            break;

        case 2:
            printf("The difference is %d.\n", a - b);
            break;

        case 3:
            printf("The product is %d.\n", a * b);
            break;

        case 4:
            if (b == 0)
            {
                printf("Division by zero is not allowed.\n");
            }
            else
            {
                printf("The quotient is %d.\n", a / b);
            }
            break;
    }

    return 0;
}