#include <stdio.h>
int main()
{ long int n,i,fact=1;
    printf("enter num\n");
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%ld",fact);
}