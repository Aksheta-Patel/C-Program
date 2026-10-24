#include <stdio.h>

// stack implementation using array and structure

typedef struct
{
    int arr[5];
    int top;
} Stack;

int isempty(Stack s)
{
    return s.top == -1;
}

int isfull(Stack s)
{
    return s.top == 4;
}

int main(void)
{
    Stack s;
    int i;
    s.top = -1;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &s.arr[i]);
        s.top++;
    }

    if (isfull(s))
    {
        printf("Stack is full\n");
    }

    printf("Stack elements:\n");

    for (i = s.top; i >= 0; i--)
    {
        printf("%d\n", s.arr[i]);
    }

    if (isempty(s))
    {
        printf("Stack is empty\n");
    }

    return 0;
}