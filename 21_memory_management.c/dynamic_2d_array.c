#include <stdio.h>
#include <stdlib.h>

// code of dynamic memory allocation for 2D array

int main(void)
{
    int **p, r, c, i, j;
    printf("enter rows and columns: ");
    scanf("%d %d", &r, &c);
    p = malloc(r * sizeof(int *));

    for (i = 0; i < r; i++)
    {
        p[i] = malloc(c * sizeof(int));
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++)
    {
        free(p[i]);
    }

    free(p);

    return 0;
}