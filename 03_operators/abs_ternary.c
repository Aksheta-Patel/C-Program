#include <stdio.h>
int main()
{
    int a, result;
printf("Enter number:");
    scanf("%d", &a);

    result = (a < 0) ? -a : a;

    printf("Av= %d", result);
}