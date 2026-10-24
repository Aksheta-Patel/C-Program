#include <stdio.h>
#include <stdlib.h>

// code of calloc for arrays

int main()
{
    int *p, i;
    p = (int *)calloc(5, sizeof(int));// Allocate and initialize to zero

    if(p == NULL)
    return 1;

    for(i = 0; i < 5; i++)
    printf("%d ", p[i]); // Print initialized elements

    free(p); // Free memory

    return 0;
}