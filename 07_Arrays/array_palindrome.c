#include <stdio.h>

/**
 * @file array_palindrome.c
 * @brief Checks whether an array is a palindrome.
 *
 * This program takes elements of an array from the user
 * and compares the elements from both ends.
 * If all corresponding elements are equal, the array
 * is a palindrome.
 */

/**
 * @brief Checks whether the given array is a palindrome.
 *
 * @return 0 if the program executes successfully.
 */
int main()
{
    int a[100], n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    i = 0;
    j = n - 1;

    while(i < j)
    {
        if(a[i] == a[j])
        {
            printf("palindrome\n");
            return 0;
        }

        i++;
        j--;
    }

    printf("not Palindrome\n");

}