#include <stdio.h>

int main()
{
    int a[] = {50, 40, 70, 60, 90};
    int index[] = {3, 0, 4, 1, 2};
    int b[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        b[index[i]] = a[i];
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}