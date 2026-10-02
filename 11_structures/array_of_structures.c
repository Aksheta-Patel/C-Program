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
} person;

int main(void)
{
    person p[2];
    int i = 0;
    int attempts = 0;
    char ch;
    int j;

    // validation of age and name 
    do
    {
        printf("Enter age of person %d: ", i + 1);

        if (scanf("%d", &p[i].age) == 1 && p[i].age > 0)
        {
            while (scanf("%c", &ch) == 1 && ch != '\n')
            {
            }

            do
            {
                printf("enter person name: ");
                scanf("%s", p[i].name);

                if (p[i].name[0] >= '0' && p[i].name[0] <= '9')
                {
                    printf("invalid input!\n");
                }

            } while (p[i].name[0] >= '0' && p[i].name[0] <= '9');

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
                break;
            }
        }

    } while (i < 2);// for 2 person 

    return 0;
}