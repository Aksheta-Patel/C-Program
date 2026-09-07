#include <stdio.h>

/**
 * @file copy_array.c
 * @brief Copies elements of one array into another array.
 *
 * This program takes elements from the user, stores them
 * in one array, and copies them into another array.
 *
 * @return 0 if the program executes successfully.
 */

/**
 * @brief Main function of the program.
 *
 * @return 0 if the program executes successfully.
 */
int main()
{
    int a[2], b[2], i;

    printf("Enter the elements: ");

    for(i = 0; i < 2; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 2; i++)
    {
        b[i] = a[i];
        printf("%d ", b[i]);
    }

}