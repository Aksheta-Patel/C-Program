#include <stdio.h>

/**

* @file largest_second_largest.c
* @brief Finds the largest and second largest element in an array.
*
* This program takes array elements from the user
* and finds the largest and second largest elements.
*
* @return 0 if the program executes successfully.
  */

int main()
{
int a[100], n, i;
int largest, second;

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
 * @brief Assumes the first element as largest.
 */
largest = a[0];

/**
 * @brief Assumes the second element as second largest.
 */
second = a[1];

/**
 * @brief Compares each element to find largest and second largest.
 */
for(i = 1; i < n; i++)
{
    if(a[i] > largest)
    {
        second = largest;
        largest = a[i];
    }
    else if(a[i] > second)
    {
        second = a[i];
    }
}

printf("Largest = %d\n", largest);
printf("Second largest = %d\n", second);

return 0;

}
