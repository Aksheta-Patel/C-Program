/**

* @file structure_padding.c
* @brief Demonstrates structure padding.
* @details Shows the extra bytes added by the compiler for alignment.
  */

#include <stdio.h>

typedef struct 
{
    char x;
    int y;
}person;

int main(void)
{
    person p;
    printf("Size of structure: %zu\n", sizeof(p));
    return 0;
}
