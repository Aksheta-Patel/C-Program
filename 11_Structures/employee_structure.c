/**

* @file employee_structure.c
* @brief inputs and displays employee details using a structure.
* @details stores employee id, name, and salary in a structure variable.
  */

#include <stdio.h>

// structure format
typedef struct
{
    int id;
    char name[20];
    float salary;
} employee;

int main(void)
{
    employee e;
    char ch;
    int i;

    // input employee id
    do
    {
        printf("enter employee id: ");

        if (scanf("%d", &e.id) == 1 && e.id > 0)
        {
            break;
        }
        else
        {
            printf("invalid input! enter number only\n");

            while (scanf("%c", &ch) == 1 && ch != '\n')
            {
            }
        }
    } while (1);

    // input employee name
    do
    {
        printf("enter employee name: ");
        scanf("%s", e.name);

        i = 0;

        while (e.name[i] != '\0')
        {
            if (e.name[i] >= '0' && e.name[i] <= '9')
            {
                printf("invalid input! enter name only\n");
                break;
            }

            i++;
        }

    } while (e.name[i] != '\0');

    // input employee salary
    do
    {
        printf("enter employee salary: ");

        if (scanf("%f", &e.salary) == 1 && e.salary >= 0)
        {
            break;
        }
        else
        {
            printf("invalid input!\n");

            while (scanf("%c", &ch) == 1 && ch != '\n')
            {
            }
        }
    } while (1);

    // display employee details
    printf("id: %d\n", e.id);
    printf("name: %s\n", e.name);
    printf("salary: %.2f\n", e.salary);
    return 0;
}