#include <stdio.h>
#include <stdlib.h>

// code to demonstrate dangling pointer

int main(void)
{
    int *p;
    p = malloc(sizeof(int));

    if (p == NULL)
    {
        return 1;
    }

    *p = 10;
    free(p);
    printf("%d\n", *p);

    return 0;
}