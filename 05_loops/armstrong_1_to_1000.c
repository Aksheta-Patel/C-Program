#include <stdio.h>
int main()
{
    int i,n, q, r, result;
    
for (i=0;i<=1000;i++)
  {   
    n=i;
    q = n;
    result=0;
    while(n != 0)
    {
        r = n % 10;
        result = result + r * r * r;
        n = n / 10;
    }

    if(result == q)
        printf("%d\n",q);
}
    
}