#include <stdio.h>

int main()
{
    int a = 10;

    a = a ^(1 << 2);

    printf("a = %d", a);

}