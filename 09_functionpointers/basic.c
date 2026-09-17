#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int (*p)(int,int)=add;
    int result;
    result=p(10,20);
    printf("%d\n",result);
}