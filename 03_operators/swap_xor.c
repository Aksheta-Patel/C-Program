#include<stdio.h>
int main()
{
    int a=15,b=10;

    a=a^b;
    b=a^b;
    a=a^b;
    printf("a = %d",a);
    printf("b = %d",b);
}
