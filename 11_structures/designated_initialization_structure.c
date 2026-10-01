#include <stdio.h>

/**

* @file structure.c
* @brief Demonstrates designated initialization of structure members.
  */

/* Structure definition */
typedef struct 
{
    char x[20];
    int a;
}person;

int main(void)
{
    /* Declare and initialize structure variable */
    person p1 = {.x = "hina", .a = 55};
    printf("%s\n%d\n", p1.x, p1.a);
    return 0;
}
