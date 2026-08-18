#include<stdio.h>

int main()
{
    int a, result;

    printf("Enter number\n");
    scanf("%d",&a);

    result = (a>0) ? a : -a;

    printf("%d",result);

}