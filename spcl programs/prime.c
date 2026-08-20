#include <stdio.h>
int main()
{
    int n, i;
    printf("enter number\n");
    scanf("%d", &n);
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            printf("not prime\n");
            return 0;
        }}
    
    
        printf("prime\n");
    
    
}