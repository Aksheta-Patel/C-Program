#include <stdio.h>
#include <stdlib.h>

// code of realloc to expand memory

int main()
{
    int *p, *q, i;
    p = (int *)malloc(3 * sizeof(int));  // Allocate 3 integers

    if(p == NULL)
        return 1;

    for(i = 0; i < 3; i++)
        p[i] = i + 1;                    // Store values

    q = (int *)realloc(p, 6 * sizeof(int));  // Increase size to 6 integers

    if(q == NULL)
    {
        free(p);
        return 1;
    }

    p = q;   
                                // Update pointer
    for(i = 3; i < 6; i++)
        p[i] = i + 1;                    // Store new values

    for(i = 0; i < 6; i++)
        printf("%d ", p[i]);             // Print all elements

    free(p);                             // Free memory

    return 0;
}