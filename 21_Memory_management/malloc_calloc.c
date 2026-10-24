#include <stdio.h>
#include <stdlib.h>

// code of malloc and calloc

int main()
{
    int *p, *q;
    p = malloc(sizeof(int)); // Allocate uninitialized memory
    q = calloc(1, sizeof(int)); // Allocate zero-initialized memory

    if(p == NULL || q == NULL)
    {    
        free(p);                             
        free(q); 
        return 1;
    }

    printf("malloc: %d\n", *p);
    printf("calloc: %d\n", *q);
    
    free(p);                             
    free(q);                             

    return 0;
}