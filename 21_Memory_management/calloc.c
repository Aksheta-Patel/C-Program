#include <stdio.h>
#include <stdlib.h>

// code to understand calloc need

int main(void)
{
    int *ptr;
    ptr = calloc(3, sizeof(int));

    if (ptr == NULL)
    {
        return 1;
    }

    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);

    free(ptr);

    return 0;
}