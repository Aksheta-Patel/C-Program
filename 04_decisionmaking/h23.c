#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
            printf("One\n");

        case 2:
            printf("Two\n");

        case 3:
            printf("Three\n");

        default:
            printf("Default\n");
    }
}