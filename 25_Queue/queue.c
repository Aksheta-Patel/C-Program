#include <stdio.h>
int main(void)
{
    int queue[5] = {10, 20, 30};
    int i;

    printf("Queue elements: ");

    for (i = 0; i < 3; i++)
    {
        printf("%d ", queue[i]);
    }

    printf("\n");
    return 0;
}