#include <stdio.h>
int main()
{
    int a;
    printf(" enter number :");
    scanf("%d",&a);
 if (a > 0 && (a & (a - 1)) == 0)
        printf("Power of 2");
    else
        printf("Not a power of 2");

}