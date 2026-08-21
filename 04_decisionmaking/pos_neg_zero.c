#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if (a>0)
    {
        printf("positive\n");
    }
    else if(a<0)
    {
        printf("negative\n");
    }
    else 
    {
        printf("zero\n");
    }
}