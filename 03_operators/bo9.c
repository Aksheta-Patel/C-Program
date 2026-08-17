#include <stdio.h>

int main()
{
    int a = 10;
    int c = 0;

    while (a > 0)
    {
        c = c + (a & 1);
        a = a >> 1;
    }

    printf(" %d", c);


}