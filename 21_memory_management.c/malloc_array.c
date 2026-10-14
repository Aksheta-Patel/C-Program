#include <stdio.h>
#include <stdlib.h>

// code of malloc array

int main(void)
{
    int *ptr;
    int i;
    ptr = malloc(sizeof(int));

    if (ptr == NULL)
    {
        return 1;
    }

    printf(" enter 5 int: ");

    for(i=0;i<=4;i++)
    {
        scanf("%d",&ptr[i]);
    }

    for(i=0;i<=4;i++)
    {
        printf("%d\n",ptr[i]);
    }
  
    free(ptr);

    return 0;
}