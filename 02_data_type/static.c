#include<stdio.h>
int fun()
{  
    static int a=10;
    printf("%d\n",a);
    a++;

}
int fun1 ()
{
    int b=8;
    printf("%d\n",b);
    b++;
}

int main()
{
    fun();
    fun();
    fun1();
    fun1();
}