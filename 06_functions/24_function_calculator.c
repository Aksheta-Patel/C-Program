
#include <stdio.h>

/**
 * @brief Adds two numbers.
 *
 * @param a First number.
 * @param b Second number.
 * @return Sum of a and b.
 */
int add(int a, int b);

/**
 * @brief Subtracts two numbers.
 *
 * @param a First number.
 * @param b Second number.
 * @return Difference of a and b.
 */
int sub(int a, int b);

/**
 * @brief Multiplies two numbers.
 *
 * @param a First number.
 * @param b Second number.
 * @return Product of a and b.
 */
int mul(int a, int b);

/**
 * @brief Divides two numbers.
 *
 * @param a First number.
 * @param b Second number.
 * @return Result of division.
 */
int div(int a, int b);

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

    while(1)
    {
        printf("\n1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 4)
        {
            break;
        }

        printf("Invalid choice! Please enter 1 to 4.\n");
    }

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
    }

    return 0;
}

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
