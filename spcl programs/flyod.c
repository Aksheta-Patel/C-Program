#include <stdio.h>
int main()
{
    int rows, i, j, n = 1;
    printf("Enter rows: ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", n);
            n++;
        }

        printf("\n");
    }
}