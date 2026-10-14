#include <stdio.h>
#include <stdlib.h>

// code to find sum of each row

int main(void)
{
    int **p, r, c, i, j, sum;
    printf("enter rows and columns: ");
    scanf("%d %d", &r, &c);
    p = malloc(r * sizeof(int *));

    for (i = 0; i < r; i++)
    {
        p[i] = malloc(c * sizeof(int));
    }

    printf("enter elements:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        sum = 0;

        for (j = 0; j < c; j++)
        {
            sum = sum + p[i][j];
        }

        printf("sum %d = %d\n", i + 1, sum);
    }

    for (i = 0; i < r; i++)
    {
        free(p[i]);
    }
    free(p);
    return 0;
}