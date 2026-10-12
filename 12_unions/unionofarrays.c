#include <stdio.h>
//union of array 
typedef union
{
    int marks[5];
} data;

int main(void)
{
    data d;
    int i;

    printf("enter marks:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &d.marks[i]);
    }

    printf("marks are:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", d.marks[i]);
    }

    return 0;
}