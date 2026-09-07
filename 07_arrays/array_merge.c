#include <stdio.h>

/**

* @file merge_arrays.c
* @brief Merges two arrays into a third array.
*
* This program accepts two arrays of two elements each,
* merges their elements into a third array, and displays
* the merged array.
*
* @details
* The first array elements are copied to the beginning
* of the third array. The second array elements are then
* copied after the first array elements.
*
* @return 0 if the program executes successfully.
  */

int main()
{
int a[2], b[2], c[4], i;


/**
 * @brief Accept elements of the first array.
 */
printf("Enter elements of first array: ");

for(i = 0; i < 2; i++)
{
    scanf("%d", &a[i]);
    c[i] = a[i];
}

/**
 * @brief Accept elements of the second array.
 */
printf("Enter elements of second array: ");

for(i = 0; i < 2; i++)
{
    scanf("%d", &b[i]);
    c[i + 2] = b[i];
}

/**
 * @brief Display the merged array.
 */
printf("Merged array: ");

for(i = 0; i < 4; i++)
{
    printf("%d ", c[i]);
}

return 0;

}
