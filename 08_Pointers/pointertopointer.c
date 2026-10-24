#include <stdio.h>

/**
 * @file double_pointer.c
 * @brief Demonstrates the use of a pointer to a pointer.
 *
 * This program declares an integer variable, a pointer to an
 * integer, and a pointer to that pointer. The address of the
 * integer variable is stored in the pointer, and the address
 * of the pointer is stored in the double pointer. The value
 * of the integer variable is accessed using double
 * dereferencing.
 */

int main()
{
    int a = 10;
    int *p, **q;

    p = &a;
    q = &p;

    printf("%d\n", *(*q));
}