#include <stdio.h>

int main()
{
    int n,result=0,q,r;
    printf("enter the number\n");
    scanf("%d",&n);
    q=n;
    while(q!=0){
        r=q%10;
        result=result*10+r;
        q=q/10;

    }
    if(n==result)
    {
        printf("palindrome\n");
    }
    else {
        printf("not!!!\n");
    }}