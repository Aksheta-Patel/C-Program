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

    if (q.front == (q.rear + 1) % 5)
    {
        printf("queue is full\n");
    }
    else
    {
        q.rear = (q.rear + 1) % 5;
        q.data[q.rear] = 10;
        q.front = 0;
    }

    if (q.front == (q.rear + 1) % 5)
    {
        printf("Queue is full\n");
    }
    else
    {
        q.rear = (q.rear + 1) % 5;
        q.data[q.rear] = 20;
    }

    if (q.front == (q.rear + 1) % 5)
    {
        printf("queue is full\n");
    }
    else
    {
        q.rear = (q.rear + 1) % 5;
        q.data[q.rear] = 30;
    }

    // display queue

    printf("queue elements : ");
    for (i = q.front; i <= q.rear; i++)
    {
        printf("%d ", q.data[i]);
    }

    // dequeue

    if (q.front == -1)
    {
        printf("\nqueue is empty\n");
    }
    else
    {
        printf("\ndeleted element : %d", q.data[q.front]);

        if (q.front == q.rear)
        {
            q.front = -1;
            q.rear = -1;
        }
        else
        {
            q.front = (q.front + 1) % 5;
        }
    }

    // display queue after deletion

    printf("\nqueue after deletion : ");

    if (q.front != -1)
    {
        for (i = q.front; i <= q.rear; i++)
        {
            printf("%d ", q.data[i]);
        }
    }

    printf("\n");

    return 0;
}