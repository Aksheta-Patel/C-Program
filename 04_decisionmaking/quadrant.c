#include<stdio.h>

int main()
{
    int a,b;

    printf("enter numbers\n");
    scanf("%d %d",&a,&b);

    if(a>0 && b>0)
    {
        printf(" 1st quadrant\n");
    }
    else if(a<0 && b>0)
    {
        printf(" 2nd quadrant\n");
    }
    else if(a<0 && b<0)
    {
        printf(" 3rd quadrant\n");
    }
    
    else if(a==0 && b==0)
    {
        printf("4th quadrant\n");
    }
    else 
    {
        printf(" on axis");
    }

}