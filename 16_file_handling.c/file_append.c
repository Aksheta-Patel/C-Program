#include <stdio.h>

// code to understand append mode 

int main(void)
{
    FILE *ptr;
    ptr = fopen("append.txt", "a");

    if (ptr == NULL)
    {
        return 1;
    }

    fprintf(ptr, "world\n");
    fclose(ptr);
    return 0;
}