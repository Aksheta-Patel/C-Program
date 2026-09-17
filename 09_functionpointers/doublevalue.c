#include<stdio.h>
int doublevalue(int a)
{
    return a*2;
}
int main()
{   int n;
    printf("enter number: ");
    scanf("%d",&n);
    int (*p)(int)=doublevalue;
    int result;
    result=p(n);
    printf("%d\n",result);
}