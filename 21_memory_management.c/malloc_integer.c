#include <stdio.h>
#include <stdlib.h>

// code of malloc usage 

int main(void)
{
    int *ptr;
    ptr = malloc(sizeof(int));
    *ptr = 10;
    printf("%d\n", *ptr);
    free(ptr);

    return 0;
}