#include <stdio.h>

/**
 * @file factorial.c
 * @brief Finds the factorial of a valid non-negative integer.
 *
 * @details
 * The program accepts only non-negative integer values.
 * If the user enters a negative number or non-numeric input,
 * an error message is displayed and the user is asked to enter
 * the value again.
 */

/**
 * @brief Finds the factorial of a number.
 *
 * @param n The non-negative number whose factorial is found.
 * @return The factorial of n.
 */
int factorial(int n);

/**
 * @brief Main function of the program.
 *
 * @details
 * The program:
 * - Takes a number from the user.
 * - Validates whether the input is an integer.
 * - Checks whether the number is non-negative.
 * - Repeats the input if the value is invalid.
 * - Calls the factorial function.
 *
 * @return 0 if the program executes successfully.
 */
int main(void)
{
    /** @brief Stores the number entered by the user. */
    int n;

    /** @details Continues until a valid non-negative integer is entered. */
    while(1)
    {
        printf("Enter a number: ");

        if(scanf("%d", &n) != 1)
        {
            printf("Invalid! Enter a number.\n");
            while(getchar() != '\n');
            continue;
        }

        if(n >= 0)
        {
            break;
        }

        printf("Invalid! Enter 0 or a positive number.\n");
    }

    printf("Factorial = %d", factorial(n));

    return 0;
}

/**
 * @brief Calculates the factorial using a for loop.
 *
 * @param n The non-negative number.
 * @return The factorial of n.
 */
int factorial(int n)
{
    /** @brief Stores the factorial result. */
    int result = 1;

    /** @details Multiplies all integers from 1 to n. */
    for(int i = 1; i <= n; i++)
    {
        result = result * i;
    }

    return result;
}