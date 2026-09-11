#include <stdio.h>

/**
 * @file pointer_addition.c
 * @brief Demonstrates pointer addition using an integer pointer.
 *
 * This program stores the address of an integer variable in a
 * pointer and accesses its value using the dereference operator.
 * The pointer is then increased by two positions using pointer
 * arithmetic.
 *
 * Note:
 * The pointer is moved outside the valid object, so dereferencing
 * it after pointer addition results in undefined behavior.
 */

int main()
{
    int a = 8;
    int *p;

    p = &a;

    printf("%d\n", *p);

    p = p + 2;

    printf("%d\n", *p);
}