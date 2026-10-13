#include <stdio.h>
#include <stdlib.h>

// code of realloc to get new address

int main()
{
    int *p, *q;
    p = (int *)malloc(3 * sizeof(int));  // Allocate memory

    if(p == NULL)
        return 1;

    printf("Before realloc: %p\n", (void *)p);  // Print original address

    q = (int *)realloc(p, 10 * sizeof(int));    // Resize memory

    if(q == NULL)
    {
        free(p);
        return 1;
    }

    p = q;                                      // Update pointer
    printf("After realloc: %p\n", (void *)p);   // Print new address
    free(p);                                    // Free memory

    return 0;
}