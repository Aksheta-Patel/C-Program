#include <stdio.h>

/**
 * @file pointer_increment.c
 * @brief Demonstrates pointer increment using an integer array.
 *
 * @details
 * This program initializes an integer array and declares an
 * integer pointer p.
 *
 * The pointer p is initially assigned the address of the first
 * element of the array using &a[0].
 *
 * The first printf statement uses *p to access the value at the
 * current address pointed to by p.
 *
 * The statement p++ increments the pointer and moves it to the
 * next element of the array. The value at the new position is
 * then accessed using *p.
 *
 * The statement ++p also increments the pointer and moves it
 * to the next element before the pointer is used.
 *
 * Therefore, both p++ and ++p move an integer pointer one array
 * element forward. The difference between them matters when
 * the increment is used as part of a larger expression.
 *
 * @return Returns 0 after successful execution.
 */

int main()
{
    int a[5] = {4, 7, 9, 3, 5};
    int *p;

    p = &a[0];

    printf("%d\n", *p);

    p++;

    printf("%d\n", *p);

    ++p;

    printf("%d\n", *p);
}