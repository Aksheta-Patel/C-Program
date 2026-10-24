#include <stdio.h>

// code to understand stack top and bottom

int main(void)
{
    int stack[5] = {10, 20, 30};
    int top = 2;
    int i;

    printf("Stack elements:\n");

    for (i = 2; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }

    printf("top element: %d\n", stack[top]);
    printf("bottom element: %d\n", stack[0]);
    return 0;
}