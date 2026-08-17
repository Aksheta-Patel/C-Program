#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    do
    {
        sum = sum + i;
        i++;
    }
    while(i <= n);

    printf("%d", sum);

    return 0;
}