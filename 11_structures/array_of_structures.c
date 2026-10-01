/**

* @file array_of_structures.c
* @brief Demonstrates input using an array of structures.
* @details Allows three invalid attempts for age input for each person.
  */

#include <stdio.h>

struct person
{
int age;
char name[20];
};

int main(void)
{
struct person p[2];
int i;
int attempts;
char ch;


for (i = 0; i < 2; i++)
{
    attempts = 0;

    do
    {
        printf("Enter age of person %d: ", i + 1);

        if (scanf("%d", &p[i].age) == 1 && p[i].age >= 0)
        {
            break;
        }
        else
        {
            attempts++;

            printf("invalid input!\n", attempts);

            while (scanf("%c", &ch) == 1 && ch != '\n')
            {
            }

            if (attempts == 3)
            {
                printf("too many wrong attempts\n");
                return 0;
            }
        }

    } while (1);

    printf("Enter name of person %d: ", i + 1);
    scanf("%s", p[i].name);

    printf("%s age is: %d\n", p[i].name, p[i].age);
}

return 0;


}
