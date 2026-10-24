#include <stdio.h>

/**
 * @brief Swaps two numbers using pointers.
 *
 * @param a Pointer to the first number.
 * @param b Pointer to the second number.
 * @return 0 after swapping the numbers.
 */
int swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    printf("%d %d", *a, *b);

    return 0;
}

/**
 * @brief Main function.
 *
 * @return 0 after successful execution.
 */
int main()
{
    int a, b;

    printf("Enter 2 no: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    return 0;
}