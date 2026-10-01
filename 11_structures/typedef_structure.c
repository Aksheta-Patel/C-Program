#include <stdio.h>

/**

* @file typedef_structure.c
* @brief Demonstrates the use of typedef with a structure.
* @details Creates a type alias for a structure and declares structure variables.
  */

/* Create a type alias named detail */
typedef struct
{
  int age;
} detail;

int main(void)
{
    /* Create structure variables using the typedef alias */
    detail p1;
    detail p2;
    printf(" enter age of p1");
    scanf("%d", &p1.age);
    return 0;

}
