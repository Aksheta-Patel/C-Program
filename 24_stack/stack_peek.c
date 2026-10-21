#include <stdio.h>

// code to understand peek operation

int main(void)
{
    int stack[5] = {10, 20, 30};
    int top = 2;

    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element is : %d\n", stack[top]);
    }

    return 0;
}