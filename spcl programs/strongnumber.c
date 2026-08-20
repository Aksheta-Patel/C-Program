#include <stdio.h>
int main()
{
    int n, q, r, i, factorial, result = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    q = n;

    while(n != 0)
    {
        r = n % 10;
        factorial = 1;
    for(i = 1; i <= r; i++)
        {
            factorial = factorial * i;
        }
        result = result + factorial;
        n = n / 10;
    }
    if(result == q)
        printf("Strong number\n");
    else
        printf("Not Strong number\n");

}