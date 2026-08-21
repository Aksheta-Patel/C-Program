#include <stdio.h>

int main()
{
    int n,rev=0,q,r;
    printf("enter the number\n");
    scanf("%d",&n);
    q=n;
for(;q>0;q=q/10){
        r=q%10;
        rev=rev*10+r;

    }

    printf("%d",rev);
}