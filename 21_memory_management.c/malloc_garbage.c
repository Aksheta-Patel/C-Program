#include <stdio.h>
#include <stdlib.h>

// code of malloc

int main()
{
    int *p, i;
    p = malloc(3 * sizeof(int));

    if(p == NULL)
    return 1;

    for(i = 0; i < 3; i++)
    {
        printf("%d ", p[i]);
    }

    free(p);

    return 0;
}