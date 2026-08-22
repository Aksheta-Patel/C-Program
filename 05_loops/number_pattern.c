#include <stdio.h>

int main()
{
    int i,j;
    // rows
    for(i=1;i<=4;i++)
    {
    
    // columns    
        for (j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}