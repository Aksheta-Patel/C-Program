#include <stdio.h>

/**

* @file structure.c
* @brief Demonstrates the use of a structure tag.
* @details Defines a structure with a tag and creates structure variables.
  */

/* Structure definition with structure tag */
typedef struct 
    {char name[20];
    int age;
    }person;

int main(void)
{
    /* Create structure variables using the structure tag */
    person p1;
    person p2;
    printf("Enter age of person p1: ");
    scanf("%d", &p1.age);
    printf("%d\n", p1.age);
    return 0;
   

}
