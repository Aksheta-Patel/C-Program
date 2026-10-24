#include <stdio.h>
#include <stdlib.h>

// code to insert nodes at beginning and end

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

int main(void)
{
    struct Node *head;
    struct Node *second;
    struct Node *newnode;
    struct Node *fourth;
    struct Node *p;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    newnode = malloc(sizeof(struct Node));
    fourth = malloc(sizeof(struct Node));

    head->data = 20;
    head->prev = NULL;
    head->next = second;

    second->data = 30;
    second->prev = head;
    second->next = NULL;

    // insert at beginning
    newnode->data = 10;
    newnode->prev = NULL;
    newnode->next = head;
    head->prev = newnode;
    head = newnode;

    // insert at end
    fourth->data = 40;
    fourth->next = NULL;
    fourth->prev = second;
    second->next = fourth;

    p = head;

    while(p != NULL)
    {
        printf("%d <-> ", p->data);
        p = p->next;
    }

    printf("NULL\n");

    free(newnode);
    free(head->next);
    free(second);
    free(fourth);

    return 0;
}