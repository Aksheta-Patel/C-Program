/**

* @file array_of_structures.c
* @brief Demonstrates input using an array of structures.
* @details Allows three invalid attempts for age input for each person.
  */

#include <stdio.h>
// structure of details of person 
typedef struct 
{
    int age;
    char name[20];
}person;

int main(void)
{
    person p[2];
    int i;
    int attempts;
    char ch;
    i = 0;
    attempts = 0;
    
    // validation of age and name 
    do
    {
        printf("Enter age of person %d: ", i + 1);

        if (scanf("%d", &p[i].age) == 1 && p[i].age >= 0)
        {
            printf("Enter name of person %d: ", i + 1);
            scanf("%s", p[i].name);
            printf("%s age is: %d\n", p[i].name, p[i].age);
            i++;
            attempts = 0;
        }
        else
        {
            attempts++;
            printf("invalid input!\n");

            while (scanf("%c", &ch) == 1 && ch != '\n')
            {
            }
            if (attempts == 3)
            {
                printf("too many wrong attempts\n");
                
            }
        }

    } while (i < 2);

    return 0;
}
