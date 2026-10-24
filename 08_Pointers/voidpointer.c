#include <stdio.h>

/**
 * @file void_pointer.c
 * @brief Demonstrates the use of a void pointer with different data types.
 *
 * @details
 * This program demonstrates how a void pointer can store the address
 * of variables having different data types.
 *
 * The integer variable a, character variable b, and floating-point
 * variable c are declared. A void pointer p is then used to store
 * the address of each variable one at a time.
 *
 * When p points to an integer, it is converted to int * before
 * dereferencing so that the integer value can be accessed.
 *
 * When p points to a character, it is converted to char * before
 * dereferencing so that the character value can be accessed.
 *
 * When p points to a float, it is converted to float * before
 * dereferencing so that the floating-point value can be accessed.
 *
 * A void pointer can store the address of different data types,
 * but it must be converted to the correct pointer type before
 * dereferencing.
 *
 * @return Returns 0 after successful execution.
 */

int main()
{
    int a = 10;
    char b = 's';
    float c = 267.8;
    void *p;

    p = &a;
    printf("%d\n", *(int *)p);

    p = &b;
    printf("%c\n", *(char *)p);

    p = &c;
    printf("%f\n", *(float *)p);
}