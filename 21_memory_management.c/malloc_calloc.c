#include <stdio.h>
#include <stdlib.h>

// code of malloc and calloc

int main()
{
    int *p, *q;
    p = (int *)malloc(5 * sizeof(int));  // Allocate uninitialized memory
    q = (int *)calloc(5, sizeof(int));   // Allocate zero-initialized memory

    if(p == NULL || q == NULL)
    {
        free(p);
        free(q);
        return 1;
    }

    p[0] = 10;                           // Store value in malloc memory
    printf("malloc: %d\n", p[0]);
    printf("calloc: %d\n", q[0]);
    free(p);                             // Free first allocation
    free(q);                             // Free second allocation

    return 0;
}