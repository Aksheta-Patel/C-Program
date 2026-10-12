#include <stdio.h>

// code to understand file pointer

int main(void)
{
    FILE *ptr;
    ptr = fopen("abc.txt", "r");

    if (ptr == NULL)
    {
        return 1;
    }

    printf("hello world\n");
    fclose(ptr);
    return 0;
}