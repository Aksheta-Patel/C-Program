#include <stdio.h>
#include <stdlib.h>

// code to insert nodes at beginning and end

struct Node
{
    int data;
    struct Node *next;
};

int main(void)
{
    struct Node *head;
    struct Node *second;
    struct Node *newnode;
    struct Node *fourth;
    struct Node *p;
    struct Node *t;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    newnode = malloc(sizeof(struct Node));
    fourth = malloc(sizeof(struct Node));

    head->data = 20;
    head->next = second;

    second->data = 30;
    second->next = head;

    // insert at beginning
    newnode->data = 10;
    newnode->next = head;
    second->next = newnode;
    head = newnode;

    // insert at end
    fourth->data = 40;
    fourth->next = head;
    second->next = fourth;

    p = head;

    do
    {
        printf("%d -> ", p->data);
        p = p->next;
    }
    while (p != head);

    printf("HEAD\n");

    // free memory
    p = head;

    do
    {
        t = p->next;
        free(p);
        p = t;
    }
    while (p != head);

    return 0;
}

