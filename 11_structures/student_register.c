
#include <stdio.h>
#include <string.h>
#include "student_structure.h"
extern student_t s[50];

int find(int n)
{
    char name[20];
    int i;
    printf("enter name to find : ");
    scanf("%s", name);

    for(i = 0; i < n; i++)
    {
        if(strcmp(name, s[i].name) == 0)
        {
            return i;
        }
    }

    return -1;
}

void edit(int n)
{
    int i, choice;
    i = find(n);
    if(i == -1)
    {
        printf("name not found\n");
        return;
    }

    printf("1.name\n");
    printf("2.std\n");
    printf("3.roll\n");
    printf("4.exit\n");
    printf("what u want to change : ");
    scanf("%d", &choice);

    switch(choice)
    {
        case NAME:
            printf("enter new name : ");
            scanf("%s", s[i].name);
            break;

        case STD:
            printf("enter new std : ");
            scanf("%d", &s[i].std);
            break;

        case ROLL:
            printf("enter new roll : ");
            scanf("%d", &s[i].roll);
            break;

        case EXIT:
            break;

        default:
            printf("invalid choice\n");
    }
}

void delete(int *n)
{
    int i, j;
    i = find(*n);
    if(i == -1)
    {
        printf("name not found\n");
        return;
    }

    for(j = i; j < *n - 1; j++)
    {
        s[j] = s[j + 1];
    }

    (*n)--;

    printf("deleted\n");
}

int main()
{
    int n, i, choice, f;
    printf("enter the number of students : ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        printf("enter name of student %d : ", i + 1);
        scanf("%s", s[i].name);
        printf("enter std of student : ");
        scanf("%d", &s[i].std);
        printf("enter roll of student : ");
        scanf("%d", &s[i].roll);
    }

    while(1)
    {
        printf("1.find\n");
        printf("2.edit\n");
        printf("3.delete\n");
        printf("4.exit\n");
        printf("enter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            f = find(n);

                if(f != -1)
                {
                    printf("name : %s\n", s[f].name);
                    printf("std : %d\n", s[f].std);
                    printf("roll : %d\n", s[f].roll);
                }
                else
                {
                    printf("name not found\n");
                }
                break;

            case 2:
                edit(n);
                break;

            case 3:
                delete(&n);
                break;

            case 4:
                printf("exit\n");
                return 0;

            default:
                printf("invalid\n");
        }
    }
}


