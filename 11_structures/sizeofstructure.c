/**

* @file structure_size.c
* @brief finds the size of a structure.
* @details uses sizeof to find the memory size of a structure variable.
  */

#include <stdio.h>

// structure to find size of it 
typedef struct
{
    int id;
    float salary;
} employee;
// to print the size of structure 
int main(void)
{
    employee e;
    printf("size of structure: %zu bytes\n", sizeof(e));
    return 0;
}
