/**

* @file structure_size.c
* @brief finds the size of a structure.
* @details uses sizeof to find the memory size of a structure variable.
  */

#include <stdio.h>

// structure format
typedef struct
{
    int id;
    float salary;
} employee;

    int main(void)
    {
    employee e;
    printf("size of structure: %zu bytes\n", sizeof(e));
    return 0;
}
