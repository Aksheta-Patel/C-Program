#include<stdio.h>

int main()
{
    int a;

    printf("enter number\n");
    scanf("%d",&a);

    if(a==1)
    {
        printf("mon\n");
    }
    else if(a==2)
    {
        printf("tue\n");
    }
    else if(a==3)
    {
        printf("wed\n");
    }
    
    else if(a==4)
    {
        printf("thur\n");
    }
    else if(a==5)
    {
        printf("fri\n");
    }
    else if(a==6)
    {
        printf("sat\n");
    }
    else 
    {
        printf("sunday");
    }

}