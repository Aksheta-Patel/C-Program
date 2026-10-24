#include <stdio.h>

/**
 * @file pointer.c
 * @brief Demonstrates accessing a variable using a pointer.
 *
 * This program stores the address of an integer variable
 * in a pointer and uses the dereference operator (*)
 * to access the value stored at that address.
 */

int main()
{
    int a = 10;
    int *p;

    p = &a;

    printf("%d\n", *p);
}