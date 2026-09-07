/**
 * @file calculator.c
 * @brief Performs arithmetic operations using a switch statement.
 *
 * @details
 * The program takes two numbers and a choice from the user.
 * It performs addition, subtraction, multiplication, or division
 * according to the selected choice.
 *
 * Invalid input is rejected and the user is allowed to enter
 * the values again.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The program:
 * - Takes two numbers from the user.
 * - Validates the entered numbers.
 * - Displays a calculator menu.
 * - Validates the menu choice.
 * - Performs the selected operation using switch.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Stores the first number. */
    int a;

    /** @brief Stores the second number. */
    int b;

    /** @brief Stores the user's menu choice. */
    int choice;

    do
    {
        printf("Enter two numbers: ");

        if(scanf("%d%d", &a, &b) != 2)
        {
            printf("Invalid! Enter two numbers again.\n");
            // scanf("%*s");
            continue;
        }

        if(a <= 0 || b <= 0)
        {
            printf("Invalid! Enter positive numbers.\n");
        }

    } while(a <= 0 || b <= 0);

    do
    {
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if(choice < 1 || choice > 5)
        {
            printf("Invalid choice! Enter 1 to 5.\n");
        }

    } while(choice < 1 || choice > 5);

    switch(choice)
    {
        case 1:
            printf("Result = %d", a + b);
            break;

        case 2:
            printf("Result = %d", a - b);
            break;

        case 3:
            printf("Result = %d", a * b);
            break;

        case 4:
            printf("Result = %d", a / b);
            break;

        case 5:
            printf("Exit");
            break;
    }

    return 0;
}