#include <stdio.h>

/**

* @file structure.c
* @brief Demonstrates the use of structure variables.
* @details Stores and displays the name and age of two persons.
  */

/* Structure definition with two members */
struct
{
    char name[20];
    int age;
} per1, per2;    /* Structure variables */

int main(void)
{
    /* Input details of person 1 */
    printf(" enter name of per1: ");
    scanf("%s", per1.name);


    printf(" enter age of per1: ");
    scanf("%d", &per1.age);

    /* Input details of person 2 */
    printf(" enter name of per2: ");
    scanf("%s", per2.name);

    printf(" enter age of per2: ");
    scanf("%d", &per2.age);

    /* Display person details */
    printf(" %s %d\n", per1.name, per1.age);
    printf(" %s %d\n", per2.name, per2.age);

    return 0;


}
