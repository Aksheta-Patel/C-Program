#include <stdio.h>

/**
 * @brief Finds the factorial of a number using recursion.
 *
 * @param n The number whose factorial is to be found.
 * @return The factorial of n.
 */
int fact(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

/**
 * @brief Main function of the program.
 *
 * @return 0 on successful execution.
 */
int main()
{
    int n;

    printf("enter num\n");
    scanf("%d", &n);

    printf("%d", fact(n));

    return 0;
}