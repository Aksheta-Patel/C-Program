#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int cal(int(*p)(int,int))
{
    
    int result;
    result=p(10,20);
    printf("%d\n",result);

}
int main()
{
    cal(add);
}