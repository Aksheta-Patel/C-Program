#include <stdio.h>

/**
 * @file pointer_addition.c
 * @brief Demonstrates pointer addition with an array.
 *
 * This program initializes an integer array and stores the
 * address of the first element in a pointer. The pointer is
 * dereferenced to access the first element of the array.
 * Pointer addition is then used to move the pointer two
 * positions forward, after which the value at the new
 * position is accessed using dereferencing.
 */

int main()
{
    int a[3] = {1, 2, 3};
    int *p;

    p = &a[0];

    printf("%d\n", *p);

    p = p + 2;

    printf("%d\n", *p);
}