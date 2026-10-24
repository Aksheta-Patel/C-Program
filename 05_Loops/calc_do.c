/**
 * @file menu_calculator.c
 * @brief Performs arithmetic operations using a menu-driven calculator.
 *
 * @details
 * The program displays a menu containing addition, subtraction,
 * multiplication, division, and exit options.
 *
 * The user can repeatedly select an operation until option 5
 * is selected.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @details
 * The program:
 * - Displays the calculator menu.
 * - Takes the user's choice.
 * - Takes two numbers for arithmetic operations.
 * - Performs the selected operation using switch-case.
 * - Repeats the menu using a do-while loop.
 * - Stops when the user selects option 5.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Stores the user's menu choice. */
    int choice;

    /** @brief Stores the first number. */
    int a;

    /** @brief Stores the second number. */
    int b;

    /** @details Repeats the menu until the user chooses Exit. */
    do
    {
        printf("\n1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        /** @details Takes two numbers only for arithmetic operations. */
        if(choice >= 1 && choice <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
        }

        switch(choice)
        {
            case 1:
                printf("Result = %d\n", a + b);
                break;

            case 2:
                printf("Result = %d\n", a - b);
                break;

            case 3:
                printf("Result = %d\n", a * b);
                break;

            case 4:
                if(b != 0)
                {
                    printf("Result = %d\n", a / b);
                }
                else
                {
                    printf("Cannot divide by zero\n");
                }
                break;

            case 5:
                printf("Exit\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 5);

    return 0;
}