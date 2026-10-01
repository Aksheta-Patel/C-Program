/**

* @file copy_structure.c
* @brief copies one structure variable to another.
* @details displays both structure variables after copying.
  */

#include <stdio.h>

// structure format
typedef struct
{
    char name[20];
    int age;
} person;

    int main(void)
    {
    person p1 = {"hina", 25};
    person p2;

    // copy structure
    p2 = p1;

    // display both
    printf("p1 name: %s\n", p1.name);
    printf("p1 age: %d\n", p1.age);
    printf("p2 name: %s\n", p2.name);
    printf("p2 age: %d\n", p2.age);
    return 0;
}
