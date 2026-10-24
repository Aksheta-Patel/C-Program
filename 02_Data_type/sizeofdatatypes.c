/**
 * @file data_type_size.c
 * @brief Demonstrates the memory size of basic data types.
 *
 * This program uses the sizeof operator to find the memory size
 * occupied by int, float, double, and char data types.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Finds the size of an int data type.
 * - Finds the size of a float data type.
 * - Finds the size of a double data type.
 * - Finds the size of a char data type.
 * - Prints the size of each data type in bytes.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    printf("Size of int is %zu bytes\n", sizeof(int));
    printf("Size of float is %zu bytes\n", sizeof(float));
    printf("Size of double is %zu bytes\n", sizeof(double));
    printf("Size of char is %zu byte\n", sizeof(char));

    return 0;
}