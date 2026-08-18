#include<stdio.h>

int main()
{
    int a,b,c,d,e;

    printf("enter numbers\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    if(a>b && a>c && a>d && a>e)
    {
        printf("a is bigger\n");
    }
    else if(b>a && b>c && b>d && b>e)
    {
        printf("b is bigger\n");
    }
    else if(c>a && c>b && c>d && c>e)
    {
        printf("c is bigger\n");
    }
    else if(d>a && d>b && d>c && d>e)
    {
        printf("d is bigger\n");
    }
    else
    {
        printf("e is bigger\n");
    }

}