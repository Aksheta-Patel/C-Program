#include <stdio.h>

/**
 * @brief Calculates simple interest.
 *
 * @param p Principal amount.
 * @param r Rate of interest.
 * @param t Time period.
 * @return 0 after calculating simple interest.
 */
int fun(int p, int r, int t)
{
    int s;

    s = p * r * t / 100;

    printf("%d", s);

    return 0;
}

/**
 * @brief Main function.
 *
 * @return 0 after successful execution.
 */
int main()
{
    int p, r, t;

    printf("Enter p r t: ");
    scanf("%d %d %d", &p, &r, &t);

    fun(p, r, t);

    return 0;
}