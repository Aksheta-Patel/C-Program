#include <stdio.h>

// code to understand a+

int main(void)
{
    FILE *ptr;
    char str[100];
    ptr = fopen("data.txt", "a+");

    if (ptr == NULL)
    {
        return 1;
    }

    fprintf(ptr, " world");
    rewind(ptr);
    fscanf(ptr, "%s", str);
    printf("%s\n", str);
    fclose(ptr);
    return 0;
}