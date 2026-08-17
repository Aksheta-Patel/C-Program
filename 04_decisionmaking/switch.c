#include <stdio.h>
int main()
{int choice;
    printf("enter 1 or 2:");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        printf("pizza");
        break;
        case 2:
        printf("burger");
        break;
        default:
        printf("nothing");
    }
}