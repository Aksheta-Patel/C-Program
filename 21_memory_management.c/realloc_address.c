#include <stdio.h>
#include <stdlib.h>

// code of realloc to get new address

int main()
{
    int *p, *q;
    p = malloc(3 * sizeof(int));// Allocate memory

    if(p == NULL)
    {
        return 1;
    }

    printf("before realloc: %p\n", (void *)p);// Print original address
    q = realloc(p, 10 * sizeof(int));// Resize memory

    if(q == NULL)
    {
        free(p);
        return 1;
    }

    p = q;// Update pointer
    printf("after realloc: %p\n", (void *)p);// Print new address
    free(p);                                    

    return 0;
}