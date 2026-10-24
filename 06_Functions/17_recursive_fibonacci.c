#include <stdio.h>

/**
 * @brief Finds the Fibonacci value using recursion.
 *
 * @param n Position of the Fibonacci number.
 * @return Fibonacci value at position n.
 */
int fibo(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
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

    printf("%d", fibo(n));

    return 0;
}