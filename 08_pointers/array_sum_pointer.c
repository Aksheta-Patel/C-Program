#include <stdio.h>
int main()
{
    int a[3] = {1, 2, 3};
    int *p;
    int i,sum=0;

    p = a;
    for(i=0;i<3;i++)
   { 
    sum=sum+(*p);
   
     p++;
   }
   printf("%d\n",sum);
}