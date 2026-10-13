#include <stdio.h>
#include <stdlib.h>

// code of realloc to shrink memory

int main()
{
    int *p, *q, i;
    p = (int *)malloc(10 * sizeof(int));  // Allocate 10 integers

    if(p == NULL)
        return 1;

    for(i = 0; i < 10; i++)
        p[i] = i + 1;                    // Store values

    q = (int *)realloc(p, 5 * sizeof(int));  // Reduce size to 5 integers

    if(q == NULL)
    {
        free(p);
        return 1;
    }

    p = q;                                // Update pointer

    for(i = 0; i < 5; i++)
        printf("%d ", p[i]);              // Print remaining elements

    free(p);                              // Free memory

    return 0;
}