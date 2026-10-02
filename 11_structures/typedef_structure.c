#include <stdio.h>
// structure of details 
typedef struct
{
    int age;
} detail;

int main(void)
{
    detail p1;
    detail p2;
    //p1 age 
    while (1)
    {
        printf("Enter age of p1: ");

        if (scanf("%d", &p1.age) == 1)
        {
            if (p1.age >= 1 && p1.age <= 100)
            {
                break;
            }
            else
            {
                printf("Invalid age! Enter between 1 and 100.\n");
            }
        }
        else
        {
            printf("Invalid input! Enter numbers only.\n");

            scanf("%*s");
        }
    }

    // p2 age 
    while (1)
    {
        printf("Enter age of p2: ");

        if (scanf("%d", &p2.age) == 1)
        {
            if (p2.age >= 1 && p2.age <= 100)
            {
                break;
            }
            else
            {
                printf("Invalid age! Enter between 1 and 100.\n");
            }
        }
        else
        {
            printf("Invalid input! Enter numbers only.\n");

            scanf("%*s");
        }
    }

    printf("\nAge of p1 is: %d\n", p1.age);
    printf("Age of p2 is: %d\n", p2.age);
    return 0;
}