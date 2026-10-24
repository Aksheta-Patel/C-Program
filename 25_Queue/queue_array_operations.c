#include <stdio.h>

struct Queue
{
    int data[5];
    int front;
    int rear;
};

int main(void)
{
    struct Queue q;
    int i;
    q.front = -1;
    q.rear = -1;

    // enqueue
    if (q.rear == 4)
    {
        printf("Queue is full\n");
    }
    else
    {
        q.rear++;
        q.data[q.rear] = 10;
        q.front = 0;
    }

    if (q.rear == 4)
    {
        printf("Queue is full\n");
    }
    else
    {
        q.rear++;
        q.data[q.rear] = 20;
    }

    if (q.rear == 4)
    {
        printf("Queue is full\n");
    }
    else
    {
        q.rear++;
        q.data[q.rear] = 30;
    }

    // display queue
    printf("Queue elements : ");
    for (i = q.front; i <= q.rear; i++)
    {
        printf("%d ", q.data[i]);
    }

    // dequeue 
    if (q.front == -1 || q.front > q.rear)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        printf("\ndeleted element: %d", q.data[q.front]);
        q.front++;
    }

    // Display queue after deletion
    printf("\nQueue after deletion : ");
    for (i = q.front; i <= q.rear; i++)
    {
        printf("%d ", q.data[i]);
    }
    printf("\n");
    return 0;
}