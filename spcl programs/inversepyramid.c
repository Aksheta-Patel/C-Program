#include <stdio.h>
int main()
{
    int i, j,n;

while(1)
   {printf("enter the no of columns within 100\n");
scanf("%d",&n);
if (n<1||n>50)
{
    printf(" invalid ! enter again");
}
    else

    { break;}
}
        for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n - i; j++)
            {printf(" ");
            }
        for(j = 1; j <= 2 * i - 1; j++)
          {  printf("*");}

        printf("\n");
    }
        for(i = n-1; i >= 1; i--)
    {
        for(j = 1; j <= n - i; j++)
            {printf(" ");
            }
        for(j = 1; j <= 2 * i - 1; j++)
          {  printf("*");}

        printf("\n");
    }
    

}

