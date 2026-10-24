/**
 * @file data_type_size.c
 * @brief Displays the memory size of basic C data types.
 *
 * This program uses the sizeof operator to find and display
 * the memory size of char, int, float, and double in bytes.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Finds the size of char.
 * - Finds the size of int.
 * - Finds the size of float.
 * - Finds the size of double.
 * - Displays the size of each data type in bytes.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    printf("Size of char is %zu byte(s)\n", sizeof(char));
    printf("Size of int is %zu byte(s)\n", sizeof(int));
    printf("Size of float is %zu byte(s)\n", sizeof(float));
    printf("Size of double is %zu byte(s)\n", sizeof(double));

    return 0;
}