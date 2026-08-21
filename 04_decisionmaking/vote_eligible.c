#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if (a>=18)
    {
        printf("eligible to vote\n");
    }
    
    else 
    {
        printf("not eligible\n");
    }
}