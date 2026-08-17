#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    if (n % 3== 0 && n% 5 ==0)
        printf(" divisible by both");
    else
        printf("Not");

}