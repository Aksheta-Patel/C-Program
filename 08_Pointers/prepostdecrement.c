#include <stdio.h>

/**
 * @file pointer_decrement.c
 * @brief Demonstrates pointer decrement using an integer array.
 *
 * @details
 * This program initializes an integer array and declares an
 * integer pointer p.
 *
 * The pointer p is initially assigned the address of the third
 * element of the array using &a[2].
 *
 * The first printf statement uses the dereference operator (*)
 * to access the value stored at the current pointer position.
 *
 * The statement p-- decreases the pointer and moves it one
 * element backward in the array. The value at the new position
 * is then accessed using *p.
 *
 * The statement --p also decreases the pointer and moves it
 * one element backward before the pointer is used.
 *
 * Therefore, both p-- and --p move an integer pointer one
 * array element backward. The difference between them matters
 * when the decrement is used as part of a larger expression.
 *
 * @return Returns 0 after successful execution.
 */

int main()
{
    int a[5] = {4, 7, 9, 3, 5};
    int *p;

    p = &a[2];

    printf("%d\n", *p);

    p--;

    printf("%d\n", *p);

    --p;

    printf("%d\n", *p);
}