#include <stdio.h>
#include <stdlib.h>

// code to find the middle node

struct Node
{
    int data;
    struct Node *next;
};

int main(void)
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *p;
    struct Node *q;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    p = head;
    q = head;

    while(q != NULL && q->next != NULL)
    {
        p = p->next;
        q = q->next->next;
    }

    printf("Middle node = %d\n", p->data);

    free(head);
    free(second);
    free(third);

    return 0;
}