/**

* @file structure_padding.c
* @brief Demonstrates structure padding using sizeof().
* @details Shows how the size of a structure can be larger than
* ```
       the sum of the sizes of its members.
  ```

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
    printf("Size of char: %zu\n", sizeof(p.x));
    printf("Size of int: %zu\n", sizeof(p.y));
    printf("Size of structure: %zu\n", sizeof(p));
    return 0;
  
}
