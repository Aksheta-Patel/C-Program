/**
 * @file structure_packing.c
 * @brief Demonstrates structure packing.
 * @details Shows how padding bytes are removed using #pragma pack(1).
 */

#include <stdio.h>

// enable structure packing
#pragma pack(1)

// structure format
typedef struct
{
    char x;
    int y;
} person;

// restore default packing
#pragma pack(1)

// to print size of packed structure
int main(void)
{
    person p;

    printf("Size of structure: %zu\n", sizeof(p));

    return 0;
}