#include<stdio.h>

int main()
{
    int a;
    char result;

    printf("Enter number\n");
    scanf("%d",&a);

    result = (a%2==0) ? 0 : 1;

    printf("%d",result);

}