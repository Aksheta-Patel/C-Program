#include <stdio.h>

/**
 * @file largest_smallest.c
 * @brief Finds the largest and smallest element in an array.
 *
 * This program takes array elements from the user
 * and finds the largest and smallest elements.
 *
 * @return 0 if the program executes successfully.
 */

int main()
{
    int a[100], n, i;
    int largest, smallest;

    /**
     * @brief Takes the number of elements from the user.
     */
    printf("Enter number of elements: ");
    scanf("%d", &n);

    /**
     * @brief Takes array elements from the user.
     */
    printf("Enter elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /**
     * @brief Assumes the first element as largest and smallest.
     */
    largest = a[0];
    smallest = a[0];

    /**
     * @brief Compares each element to find largest and smallest.
     */
    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
            largest = a[i];

        if(a[i] < smallest)
            smallest = a[i];
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

}