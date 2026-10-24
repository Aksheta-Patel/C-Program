#include <stdio.h>

/**
 * @brief Checks whether a number is prime or not.
 *
 * @param n The number to be checked.
 * @return int Returns 0 after checking the number.
 */
int fun(int n);

/**
 * @brief Checks whether the given number is prime.
 *
 * @param n The number entered by the user.
 * @return int Returns 0.
 */
int fun(int n)
{
    int i;

    if(n <= 1)
    {
        printf("not prime");
    }
    else
    {
        for(i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                printf("not prime");
                return 0;
            }
        }

        printf("prime");
    }

    return 0;
}

/**
 * @brief Main function of the program.
 *
 * @return int Program termination status.
 */
int main()
{
    int n;

    printf("Enter no: ");
    scanf("%d", &n);

    fun(n);
}