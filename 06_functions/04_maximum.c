#include <stdio.h>

/**
 * @brief Finds and prints the greater of two numbers.
 *
 * @param a First number.
 * @param b Second number.
 * @return int Returns 0 after printing the greater number.
 */
int fun(int a, int b)
{
    if(a > b)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d", b);
    }

    return 0;
}

/**
 * @brief Main function of the program.
 *
 * @return int Returns 0 when the program ends.
 */
int main()
{
    int a, b;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    fun(a, b);

    return 0;
}