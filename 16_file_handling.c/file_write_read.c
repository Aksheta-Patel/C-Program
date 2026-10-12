#include <stdio.h>

// code to understand w+

int main(void)
{
    FILE *ptr;
    char str[100];
    ptr = fopen("xyz.txt", "w+");

    if (ptr == NULL)
    {
        return 1;
    }

    fprintf(ptr, "hello");
    rewind(ptr);
    fscanf(ptr, "%s", str);
    printf("%s\n", str);
    fclose(ptr);
    return 0;
}