#include <stdio.h>
#include <stdlib.h>

// code for realloc 

int main(void)
{
    int *ptr;
    int *temp;
    ptr = malloc(2 * sizeof(int));

    if (ptr == NULL)
    {
        return 1;
    }

    ptr[0] = 10;
    ptr[1] = 20;
    temp = realloc(ptr, 4 * sizeof(int));

    if (temp == NULL)
    {
        free(ptr);
        return 1;
    }

    ptr = temp;
    ptr[2] = 30;
    ptr[3] = 40;
    printf("%d %d %d %d\n", ptr[0], ptr[1], ptr[2], ptr[3]);
    free(ptr);

    return 0;
}