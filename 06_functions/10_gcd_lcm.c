#include <stdio.h>

/**
 * @brief Finds the GCD and LCM of two numbers.
 *
 * @param a First number.
 * @param b Second number.
 */
void find(int a, int b)
{
    int i, gcd, lcm;

    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }

    lcm = (a * b) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);
}

/**
 * @brief Main function of the program.
 *
 * @return 0 if the program runs successfully.
 */
int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    find(a, b);

    return 0;
}