#include <stdio.h>

// code to understand r+

int main(void)
{
    FILE *ptr;
    char str[100];

    ptr = fopen("data.txt", "r+");

    if (ptr == NULL)
    {
        return 1;
    }

    fscanf(ptr, "%s", str);
    printf("%s\n", str);

    fprintf(ptr, " c");

    fclose(ptr);
    return 0;
}