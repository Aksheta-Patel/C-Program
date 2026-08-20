#include<stdio.h>

int main()
{ int a,bill;
    printf("enter units\n");
    scanf("%d",&a);
    if(a<=100)
    {
      bill=a*2;
    }
    else if (a<=200)
    {
      bill=a*4;
    }
    else if (a<=400)
    {
      bill=a*6;
    }
    else 
    {
      bill=a*8;
    }
    printf("%d\n",bill);
}