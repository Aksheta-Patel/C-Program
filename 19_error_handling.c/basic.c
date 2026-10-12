#include <stdio.h>
#include <errno.h>
#include <string.h>

// code to understand errno function

int main(void)
{
    FILE *p;
    p = fopen("abc.txt", "r");

    if (p == NULL)
    {
        printf("error number: %d\n", errno);
        printf("%s\n", strerror(errno));
        perror("file error");
        return 1;
    }

    printf("file opened successfully\n");
    fclose(p);
    return 0;
}