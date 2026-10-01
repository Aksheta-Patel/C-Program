#include <stdio.h>

/**

* @file structure.c
* @brief Demonstrates initializing structure variables.
* @details Defines a structure with a tag and initializes variables inside main.
  */

/* Structure definition with structure tag */
typedef struct 
{
    char name[20];
    int age;
}person;

int main(void)
{
    /* Declare and initialize structure variables */
    person p1 = {"hina", 55};
    person p2 = {"mina", 44};
    printf("%d\n", p1.age);
    printf("%d\n", p2.age);
    return 0;

}
