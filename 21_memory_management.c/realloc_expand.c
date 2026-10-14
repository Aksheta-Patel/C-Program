#include <stdio.h>
#include <stdlib.h>

// code of malloc and realloc

int main(void)
{
    int *p, *temp, i;

    p = malloc(3 * sizeof(int));

    if (p == NULL)
    {
        return 1;
    }

    for (i = 0; i < 3; i++)
    {
        printf("enter value: ");
        scanf("%d", &p[i]);
    }

    temp = realloc(p, 6 * sizeof(int));

    if (temp == NULL)
    {
        free(p);
        return 1;
    }

    p = temp;

    for (i = 3; i < 6; i++)
    {
        printf("enter new value: ");
        scanf("%d", &p[i]);
    }

    for (i = 0; i < 6; i++)
    {
        printf("%d ", p[i]);
    }

    printf("\n");
    free(p);

    return 0;
}