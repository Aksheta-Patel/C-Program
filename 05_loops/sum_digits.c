#include <stdio.h>

int main()
{
    int n,result=0,q,r;
    printf("enter the number\n");
    scanf("%d",&n);
    q=n;
    while(q!=0){
        r=q%10;
        result=result+r;
        q=q/10;

    }

    printf("%d",result);
}