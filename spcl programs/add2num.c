#include <stdio.h>
int main()
{ int i,a,b;
    printf("enter two num\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        a++;
    }
printf("%d",a);
}