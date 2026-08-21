#include <stdio.h>

int main()
{
    int n,count=0,q;
    printf("enter the number\n");
    scanf("%d",&n);
    q=n;
    while(q!=0){
    
        q=q/10;
        count++;

    }
    printf("%d\n",count);
}