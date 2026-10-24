#include <stdio.h>
int arr[10];
int top = -1;

void push(int data)
{
    if (top == 9)
    {
        printf("Stack is full\n");
    }
    else
    {
        top++;
        arr[top] = data;
        printf("Pushed: %d\n", data);
    }
}

void pop(void)
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Popped: %d\n", arr[top]);
        top--;
    }
}

int main(void)
{
    push(10);
    push(20);
    push(30);
    pop();
    pop();
    return 0;
}