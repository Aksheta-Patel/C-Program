#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf(" divisible by 5 \n");
    }
    
    else if(a%11==0)
    {
        printf(" divisible by 11 \n");
    }
    else 
    {
        printf(" not divisible by both");
    }
}