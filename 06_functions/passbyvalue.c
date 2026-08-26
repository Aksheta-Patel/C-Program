#include<stdio.h>
void add(int , int);
void add (int a,int b)
{ int sum=0;

    sum=a+b;
    printf("%d",sum);
}
void main()
{int sum;
    int a=10, b=4;
add(a,b);
printf("%d",sum);
}
