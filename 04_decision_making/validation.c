/**
 * @file calculator.c
 * @brief Performs basic arithmetic operations using switch-case.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Takes two numbers and a choice from the user and performs
 * addition, subtraction, multiplication, or division.
 *
 * @return 0 if the program runs successfully.
 */
int main()
{
    /** First number */
    int a;

    /** Second number */
    int b;

    /** Stores the user's choice */
    int choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice < 1 || choice > 4)
    {
        printf("Invalid choice! Enter again: ");
        scanf("%d", &choice);
    }

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
            if(b != 0)
            {
                printf("Result = %d", a / b);
            }
            else
            {
                printf("Cannot divide by zero");
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}