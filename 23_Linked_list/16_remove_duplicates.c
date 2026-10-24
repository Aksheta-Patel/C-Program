#include <stdio.h>
#include <stdlib.h>

// code to remove duplicates

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

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 10;
    third->next = NULL;

    p = head;

    while(p->next != NULL)
    {
        if(p->data == p->next->data)
        {
            struct Node *q = p->next;
            p->next = q->next;
            free(q);
        }
        else
            p = p->next;
    }

    p = head;

    while(p != NULL)
    {
        printf("%d -> ", p->data);
        p = p->next;
    }

    printf("NULL\n");

    free(head);
    free(second);

    return 0;
}