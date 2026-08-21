#include <stdio.h>

int main()
{
    int a, b, r;

    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);
    //validation
    while(a <= 0 || b <= 0)
    {
        printf("Invalid input\n\r");
        scanf("%d%d",&a,&b);
    }
    // find gcd
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    printf("GCD = %d", a);

}