#include <stdio.h>

/**
 * @file null_pointer.c
 * @brief Demonstrates the use of a null pointer.
 *
 * @details
 * This program declares an integer pointer p and initializes it
 * with NULL.
 *
 * A null pointer does not point to a valid object or memory
 * location. It is commonly used to indicate that a pointer
 * currently has no valid address.
 *
 * The if condition checks whether p is equal to NULL.
 *
 * If p is NULL, the message "not pointing to anything" is
 * displayed.
 *
 * The program does not dereference the null pointer, because
 * dereferencing a null pointer using *p would cause undefined
 * behavior.
 *
 * @return Returns 0 after successful execution.
 */

int main()
{
    int *p = NULL;

    if(p == NULL)
    {
        printf("not pointing to anything\n");
    }
}