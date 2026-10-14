#include <stdio.h>
#include <stdlib.h>

// code to find sum and average

int main(void)
{
    int *p, i, sum = 0, n;
    float avg;
    printf("enter total no: ");
    scanf("%d", &n);
    p = malloc(n * sizeof(int));

    if (p == NULL)
    {
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
        sum = sum + p[i];
    }

    avg = (float)sum / n;
    printf("sum: %d\n", sum);
    printf("avg: %.2f\n", avg);
    free(p);

    return 0;
}