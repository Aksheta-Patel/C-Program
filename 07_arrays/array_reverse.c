/**
 * @file array_reverse.c
 * @brief Prints the elements of an array in reverse order.
 *
 * The program takes 5 integer elements from the user
 * and displays the elements in reverse order.
 *
 * @details
 * The array elements are stored from index 0 to index 4.
 * The second loop starts from index 4 and decreases up to index 0
 * to print the elements in reverse order.
 *
 * @note The program uses a fixed-size array of 5 elements.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Takes 5 elements as input and prints them in reverse order.
 *
 * @return 0 Program executed successfully.
 */
int main()
{
    int arr[5];
    int i;

    printf("Enter 5 elements: ");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}