#include<stdio.h>
// using function pointer for add and sub operation
typedef struct
{
    int (*ptr)(int,int);
    int (*pt)(int,int);

}mathops;//name of structure

int add(int a,int b)// add functn defn
{
    return a+b;
}
int sub(int a,int b)// sub functn defn
{
    return a-b;
}

int main(void)
{
    int result,res;
    mathops p={add,sub};
    result=p.ptr(10,20);
    res=p.pt(10,20);
    printf("%d\n",result);
    printf("%d\n",res);
    return 0;

}