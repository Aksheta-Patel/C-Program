#include <stdio.h>

int main()
{
    int n, i, a, lcm;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    scanf("%d", &lcm);

    for(i = 2; i <= n; i++)
    {
        scanf("%d", &a);

        while(lcm % a != 0)
            lcm = lcm + lcm;
    }

    printf("LCM = %d", lcm);
}