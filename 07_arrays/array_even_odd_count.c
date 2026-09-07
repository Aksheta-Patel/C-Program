/**
 * @file array_even_odd.c
 * @brief Checks whether an array element is even or odd.
 *
 * The program takes one element from the user and checks
 * whether the element is even or odd.
 */

#include <stdio.h>

/**
 * @brief Global loop counter.
 */
int i;

/**
 * @brief Stores one integer element.
 */
int a[1];

/**
 * @brief Main function.
 *
 * @return 0 Program executed successfully.
 */
int main()
{
    printf("Enter the element: ");

    for(i = 0; i < 1; i++)
    {
        scanf("%d", &a[i]);
    }

    if(a[0] % 2 == 0)
    {
        printf("element of array is even\n");
    }
    else
    {
        printf("element of array is odd\n");
    }

    return 0;
}