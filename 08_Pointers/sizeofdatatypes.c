#include <stdio.h>

/**
 * @file pointer_size.c
 * @brief Demonstrates the size of different pointer types.
 *
 * @details
 * This program declares integer, character, and floating-point variables
 * and a void pointer.
 *
 * The void pointer p stores the address of each variable one at a time.
 * The sizeof operator is used to find the size of int, char, and float
 * pointer types.
 *
 * On most 64-bit systems, all three pointer types generally have the
 * same size because pointer size depends on the system architecture,
 * not on the data type being pointed to.
 *
 * @return Returns 0 after successful execution.
 */

int main()
{
    int a;
    char b;
    float c;
    void *p;

    p = &a;
    printf("%zu\n", (sizeof(int*)));

    p = &b;
    printf("%zu\n", (sizeof(char*)));

    p = &c;
    printf("%zu\n", (sizeof(float*)));
}