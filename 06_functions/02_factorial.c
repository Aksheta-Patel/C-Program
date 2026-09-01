#include <stdio.h>

/**
 * @brief Finds the factorial of a number.
 *
 * @param n The number whose factorial is found.
 * @return Factorial of n.
 */
int factorial(int n);

/**
 * @brief Main function of the program.
 *
 * @return 0 if the program runs successfully.
 */
int main()
{
    int n;

    while(1)
    {
        printf("Enter a number: ");
        scanf("%d", &n);

        if(n >= 0)
        {
            break;
        }

        printf("Invalid! Enter 0 or a positive number.\n");
    }

    printf("Factorial = %d", factorial(n));

    return 0;
}

int factorial(int n)
{
    int result = 1;

    for(int i = 1; i <= n; i++)
    {
        result = result * i;
    }

    return result;
}