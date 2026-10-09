#include<stdio.h>

typedef struct
{
    int (*ptr)(int,int);
}person;

int add(int a,int b)
{
    return a+b;
}
int main()
{
    int result;
    person p;
    p.ptr=add;
    result=p.ptr(10,20);
    printf("%d\n",result);

}