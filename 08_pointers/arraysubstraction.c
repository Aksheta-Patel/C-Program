#include <stdio.h>

/**
 * @file pointer_subtraction.c
 * @brief Demonstrates subtraction of two pointers.
 *
 * @details
 * This program initializes an integer array and declares two
 * integer pointers, p and q.
 *
 * The pointer p stores the address of the first element of the
 * array, while q stores the address of the fourth element.
 *
 * The expression p - q gives the number of array elements between
 * the two pointers. Similarly, q - p gives the distance in the
 * opposite direction.
 *
 * Pointer subtraction gives the difference in array positions,
 * not the difference in memory addresses in bytes.
 *
 * @return Returns 0 after successful execution.
 */

int main()
{
    int a[5] = {7, 5, 9, 9, 2};
    int *p, *q;

    p = &a[0];
    q = &a[3];

    printf("%ld\n", p - q);
    printf("%ld\n", q - p);
}