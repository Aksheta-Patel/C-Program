#include <stdio.h>

// code to understand write mode 

int main(void)
{
    FILE *ptr;

    ptr = fopen("data.txt", "w");

    if (ptr == NULL)
    {
        return 1;
    }

    fprintf(ptr, "hello");

    fclose(ptr);
    return 0;
}