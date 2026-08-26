#include <stdio.h>

/**
 * @brief Calculates the factorial of a number.
 *
 * @param n The number whose factorial is calculated.
 * @return The factorial of n.
 */
int fun(int n)
{
    int i,fact = 1;

    /**
     * Multiply fact by n and decrease n by 1
     * until n becomes 0.
     */
    for(i=1; n > i; i++)
    
    {
        fact = fact * n;
    }

    printf("%d", fact);
}

/**
 * @brief Main function.
 *
 * @return 0 on successful execution.
 */
int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    fun(n);
}