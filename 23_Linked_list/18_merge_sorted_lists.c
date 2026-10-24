#include <stdio.h>
#include <stdlib.h>

// code to merge two sorted linked lists

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
    struct Node *fourth;
    struct Node *p;
    struct Node *q;
    struct Node *newhead;
    struct Node *last;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));
    fourth = malloc(sizeof(struct Node));

    // first sorted list: 10 -> 30
    head->data = 10;
    head->next = second;

    second->data = 30;
    second->next = NULL;

    // second sorted list: 20 -> 40
    third->data = 20;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    p = head;
    q = third;
    newhead = NULL;
    last = NULL;

    while(p != NULL && q != NULL)
    {
        if(p->data < q->data)
        {
            if(newhead == NULL)
                newhead = p;
            else
                last->next = p;

            last = p;
            p = p->next;
        }
        else
        {
            if(newhead == NULL)
                newhead = q;
            else
                last->next = q;

            last = q;
            q = q->next;
        }
    }

    if(p != NULL)
        last->next = p;

    if(q != NULL)
        last->next = q;

    p = newhead;

    while(p != NULL)
    {
        printf("%d -> ", p->data);
        p = p->next;
    }

    printf("NULL\n");

    free(head);
    free(second);
    free(third);
    free(fourth);

    return 0;
}