#include <stdio.h>

/**
 * @brief Adds two numbers.
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * @brief Subtracts two numbers.
 */
int sub(int a, int b)
{
    return a - b;
}

/**
 * @brief Multiplies two numbers.
 */
int mul(int a, int b)
{
    return a * b;
}

/**
 * @brief Divides two numbers.
 */
int div(int a, int b)
{
    return a / b;
}

/**
 * @brief Main function of the program.
 *
 * @return 0 if the program runs successfully.
 */
int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Result = %d", add(a, b));
            break;

        case 2:
            printf("Result = %d", sub(a, b));
            break;

        case 3:
            printf("Result = %d", mul(a, b));
            break;

        case 4:
            printf("Result = %d", div(a, b));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}