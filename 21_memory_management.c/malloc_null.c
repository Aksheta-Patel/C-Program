#include <stdio.h>
#include <stdlib.h>

// code of NULL pointer and malloc

int main()
{
    int *p;

    p = (int *)malloc(sizeof(int));  // Allocate memory

    if(p == NULL)                    // Check whether allocation failed
        printf("Memory allocation failed");
    else
        printf("Memory allocated");

    free(p);                         // Free memory

    return 0;
}