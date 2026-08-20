#include <stdio.h>
int main()
{
    int a, b, i;
    printf("Enter first year: ");
    scanf("%d", &a);
    printf("Enter last year: ");
    scanf("%d", &b);
    for(i = a; i <= b; i++)
    {
        if(i% 4 == 0)
        {
            printf("%d is leap year\n", i);
        }
    }
}