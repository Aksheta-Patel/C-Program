#include <stdio.h>
int main()
{
    int n, q, r, result = 0;

    printf("Enter a number:");
    scanf("%d", &n);

    q = n;

    while(n != 0)
    {
        r = n % 10;
        result = result + r * r * r;
        n = n / 10;
    }

    if(result == q)
        printf("Armstrong number\n");
    else
        printf("Not Armstrong number\n");
}