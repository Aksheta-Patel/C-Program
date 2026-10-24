#include <stdio.h>

int result = 0;

/**
 * @brief Reverses a number using recursion.
 *
 * @param n Number to reverse.
 * @return Reversed number.
 */
int pali(int n)
{
    int r;

    if(n == 0)
        return result;

    r = n % 10;
    result = result * 10+r;

    return pali(n / 10);
}

/**
 * @brief Main function of the program.
 *
 * @return 0 on successful execution.
 */
int main()
{
    int n, result;

    printf("enter number\n");
    scanf("%d", &n);

    result = pali(n);

    if(result== n)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}