#include <stdio.h>

// code to understand read mode

int main(void)
{
    FILE *ptr;
    char s[100];
    ptr = fopen("data.txt", "r");

    if (ptr == NULL)
    {
        return 1;
    }

    fscanf(ptr, "%s", s);
    printf("%s\n", s);
    fclose(ptr);
    return 0;
}