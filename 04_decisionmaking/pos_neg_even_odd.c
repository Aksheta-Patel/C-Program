#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);

    if(a >= 0)
    {
        if(a % 2 == 0)
        {
            printf("Positive and Even");
        }
        else
        {
            printf("Positive and Odd");
        }
    }
    else
    {
        if(a % 2 == 0)
        {
            printf("Negative and Even");
        }
        else
        {
            printf("Negative and Odd");
        }
    }
}