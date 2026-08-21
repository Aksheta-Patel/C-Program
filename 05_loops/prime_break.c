#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter number: ");
    scanf("%d", &n);

    n++;
    // to check prime
    while(1)
    {
        for(i = 2; i < n; i++)
        {
            if(n % i == 0)
                break;
        }

        if(i == n)
        {
            printf("First prime = %d", n);
            break;
        }

    }

}